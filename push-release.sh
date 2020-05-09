#!/bin/bash
set -o errexit
set -o nounset

function push() {
	echo "Will scp $1 to sourceforge:/home/pfs/project/vice-emu/releases/binaries/macosx/"

	scp $1 sf:/home/pfs/project/vice-emu/releases/binaries/macosx/
}

push build.nosync/bindist/*sdl2*.dmg
push build.nosync/bindist/*gtk3*.dmg

