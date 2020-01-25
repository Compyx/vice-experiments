#!/bin/bash

for dir in $(find . -type d | grep -v autom4te.cache | grep -v '/\.')
do
	cd $dir
	echo $dir
	
	if svn propget svn:ignore . >/dev/null 2>&1
	then
		svn propget svn:ignore . > .gitignore
		git add .gitignore
	else
		if [ -e .gitignore ]
		then
			rm .gitignore
		fi
	fi

	cd - >/dev/null
done
