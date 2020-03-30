/*
 * mainlock.c - VICE mutex used to synchronise access to the VICE api and data.
 *
 * The mutex is held most of the time by the thread spawned to run VICE in the background.
 * It is frequently unlocked and relocked to allow the UI thread an opportunity to safely
 * call vice functions and access vice data structures.
 *
 * Written by
 *  David Hogan <david.q.hogan@gmail.com>
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

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#include "machine.h"
#include "mainlock.h"
#include "vsyncapi.h"

static volatile int vice_thread_keepalive = 1;

static int ui_thread_waiting = 0;
static int ui_thread_lock_count = 0;

/* Used to hand control to the UI */
static pthread_mutex_t yield_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t yield_condition = PTHREAD_COND_INITIALIZER;

/* Used to release control to VICE */
static pthread_mutex_t return_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t return_condition = PTHREAD_COND_INITIALIZER;

static unsigned long tick_per_ms;
static unsigned long start_time;

void mainlock_init()
{
    tick_per_ms = vsyncarch_frequency() / 1000;
    start_time = vsyncarch_gettime();
}

void mainlock_initiate_shutdown()
{
    vice_thread_keepalive = 0;
}

/** \brief Provide the UI thread a safe opportunity to call into VICE.
 */
void mainlock_yield()
{
    pthread_mutex_lock(&yield_mutex);
    
    /* If the UI thread is not waiting for VICE, we're done here. */
    if (!ui_thread_waiting) {

        /* Oh, but also check if the vice thread has been told to die. */
        if (!vice_thread_keepalive) {
            machine_shutdown();
            pthread_exit(NULL);
        }

        pthread_mutex_unlock(&yield_mutex);
        return;
    }
    
    /*
     * The main thread is waiting to do some work.
     *
     * Before waking it up, we need to ensure that it can't complete its work and send a release signal before we are ready for it.
     * So we take ownership of the release mutex to block its return signal until we are waiting for it.
     */
    pthread_mutex_lock(&return_mutex);
    
    /* Signal the main thread that it can take control of vice. */
    pthread_cond_signal(&yield_condition);
    pthread_mutex_unlock(&yield_mutex);

    /* Atomically release the return_mutex and wait for the release signal from the main thread. */
    pthread_cond_wait(&return_condition, &return_mutex);
    pthread_mutex_unlock(&return_mutex);
}

void mainlock_obtain()
{
    //printf("obtaining\n");
    
    pthread_mutex_lock(&yield_mutex);
    
    /* If we have already obtained the lock, we're done */
    if (ui_thread_lock_count) {
        printf("\n****\nlock already obtained\n****\n\n");
        ui_thread_lock_count++;
        pthread_mutex_unlock(&yield_mutex);
        return;
    }
    
    /* Let the VICE thread know that the UI thread is ready to do some work., */
    ui_thread_waiting = 1;
    
    /* Release yield mutex, wait for the VICE thread to signal, and re-obtain the mutex */
    pthread_cond_wait(&yield_condition, &yield_mutex);
    
    /* OK, the UI thread has control of VICE until it signals the return condition via mainlock_release() */
    ui_thread_waiting = 0;
    ui_thread_lock_count = 1;
    
    pthread_mutex_unlock(&yield_mutex);
    
    //printf("obtained\n");
}

void mainlock_release()
{
    //printf("releasing ...\n");
    
    pthread_mutex_lock(&return_mutex);
    
    ui_thread_lock_count--;
    
    if (ui_thread_lock_count) {
        printf("\n****\nlock still locked \n****\n\n");
        pthread_mutex_unlock(&return_mutex);
        return;
    }
    
    pthread_cond_signal(&return_condition);
    
    pthread_mutex_unlock(&return_mutex);
    
    //printf("released\n");
}
