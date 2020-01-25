#!/bin/bash

for dir in $(find . -type d | grep -v autom4te.cache | grep -v '/\.')
do
	cd $dir
	echo $dir
	
	svn propget svn:ignore . 2>/dev/null > .gitignore

	if [ $? != 1 ]
	then
		rm .gitignore
	else
		git add .gitignore
	fi

	cd - >/dev/null
done
