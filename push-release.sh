#!/bin/bash
set -o errexit
set -o nounset

echo "Will scp $1 to sourceforge:/home/pfs/project/vice-emu/releases/binaries/macosx/"

scp $1 sf:/home/pfs/project/vice-emu/releases/binaries/macosx/
