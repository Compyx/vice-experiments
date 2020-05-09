#!/bin/bash
set -o errexit
set -o nounset
cd $(dirname $0)

source $HOME/bin/code-sign-env

cd build.nosync
mkdir -p bindist
cd bindist

#
# delete everything in the bindist folder except the vice source
#

shopt -s extglob
rm -rfv !("vice")
shopt -u extglob

#
# update or checkout vice
#

if [ -e vice ]
then
	cd vice
	svn update
	cd ..
else
	svn checkout svn://svn.code.sf.net/p/vice-emu/code/trunk/vice
fi

#
# Prepare for build
#

cd vice
./autogen.sh
cd ..

BUILD_FLAGS="--enable-arch=no --enable-lame"

#
# GTK3 build
#

mkdir gtk3
cd gtk3

../vice/configure --enable-native-gtk3ui $BUILD_FLAGS

make -j 8
make bindistzip
../../../notarise.sh *.dmg
mv *.dmg ..
cd ..

#
# SDL2 build
#

mkdir sdl2
cd sdl2

../vice/configure --enable-sdlui2 $BUILD_FLAGS

make -j 8
make bindistzip
../../../notarise.sh *.dmg
mv *.dmg ..
cd ..

echo
echo "Looks like it worked."

open .

