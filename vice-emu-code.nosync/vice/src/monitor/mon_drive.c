/*
 * mon_drive.c - The VICE built-in monitor drive functions.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *  Daniel Sladic <sladic@eecg.toronto.edu>
 *  Ettore Perazzoli <ettore@comm2000.it>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#include "vice.h"

#include <stdio.h>
#include <string.h>

#include "attach.h"
#include "diskcontents.h"
#include "diskimage.h"
#include "imagecontents.h"
#include "lib.h"
#include "montypes.h"
#include "mon_drive.h"
#include "mon_util.h"
#include "types.h"
#include "uimon.h"
#include "vdrive.h"
#include "vdrive-command.h"


#define ADDR_LIMIT(x) ((uint16_t)(addr_mask(x)))


void mon_drive_block_cmd(int op, int track, int sector, MON_ADDR addr)
{
    vdrive_t *vdrive;

    mon_evaluate_default_addr(&addr);

    /* TODO: other units, drive 1? */
    vdrive = file_system_get_vdrive(8, 0);

    if (!vdrive || vdrive->image == NULL) {
        mon_out("No disk attached\n");
        return;
    }

    if (!op) {
        uint8_t readdata[256];
        int i, j, dst;
        MEMSPACE dest_mem;

        /* We ignore disk error codes here.  */
        if (vdrive_read_sector(vdrive, readdata, track, sector)
            < 0) {
            mon_out("Error reading track %d sector %d\n", track, sector);
            return;
        }

        if (mon_is_valid_addr(addr)) {
            dst = addr_location(addr);
            dest_mem = addr_memspace(addr);

            for (i = 0; i < 256; i++) {
                mon_set_mem_val(dest_mem, ADDR_LIMIT(dst + i), readdata[i]);
            }

            mon_out("Read track %d sector %d into address $%04x\n",
                    track, sector, (unsigned int)dst);
        } else {
            for (i = 0; i < 16; i++) {
                mon_out(">%04x", (unsigned int)(i * 16));
                for (j = 0; j < 16; j++) {
                    if ((j & 3) == 0) {
                        mon_out(" ");
                    }
                    mon_out(" %02x", readdata[i * 16 + j]);
                }
                mon_out("\n");
            }
        }
    } else {
        uint8_t writedata[256];
        int i, src;
        MEMSPACE src_mem;

        src = addr_location(addr);
        src_mem = addr_memspace(addr);

        for (i = 0; i < 256; i++) {
            writedata[i] = mon_get_mem_val(src_mem, ADDR_LIMIT(src + i));
        }

        if (vdrive_write_sector(vdrive, writedata, track, sector)) {
            mon_out("Error writing track %d sector %d\n", track, sector);
            return;
        }

        mon_out("Write data from address $%04x to track %d sector %d\n",
                (unsigned int)src, track, sector);
    }
}


void mon_drive_execute_disk_cmd(char *cmd)
{
    unsigned int len;
    vdrive_t *vdrive;

    /* FIXME */
    vdrive = file_system_get_vdrive(8, 0);

    len = (unsigned int)strlen(cmd);

    vdrive_command_execute(vdrive, (uint8_t *)cmd, len);
}

void mon_drive_list(int drive_unit)
{
    const char *name;
    image_contents_t *listing;
    vdrive_t *vdrive;
    /* TODO: drive 1? */
    unsigned int drive = 0;

    if ((drive_unit < 8) || (drive_unit > 11)) {
        drive_unit = 8;
    }

    vdrive = file_system_get_vdrive(drive_unit, drive);

    if (vdrive == NULL || vdrive->image == NULL) {
        mon_out("Drive %i not ready.\n", drive_unit);
        return;
    }

    name = disk_image_name_get(vdrive->image);

    listing = diskcontents_read(name, drive_unit, drive);

    if (listing != NULL) {
        char *string = image_contents_to_string(listing, 1);
        image_contents_file_list_t *element = listing->file_list;

        mon_out("%s\n", string);
        lib_free(string);

        if (element == NULL) {
            mon_out("Empty image\n");
        } else {
            do {
                string = image_contents_file_to_string(element, 1);
                mon_out("%s\n", string);
                lib_free(string);
            }
            while ((element = element->next) != NULL);
        }

        if (listing->blocks_free >= 0) {
            string = lib_msprintf("%d blocks free.\n", listing->blocks_free);
            mon_out("%s", string);
            lib_free(string);
        }
    }
}

