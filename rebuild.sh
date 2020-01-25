#!/bin/bash
set -o errexit
set -o nounset

(cd ../vice-emu-code/vice && ./autogen.sh)
../vice-emu-code/vice/configure "$@"

#find . -name Makefile -exec ../SILENT.sh {} \;

time make -j

[ -L lib ] && rm lib
ln -s /usr/local/lib

[ -L libmp3lame.dylib ] && rm libmp3lame.dylib
ln -s /opt/local/lib/libmp3lame.dylib

