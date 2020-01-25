#!/bin/bash

for file in $(find . -type f | grep -v '/\.' | sed -e 's/ /__SPACE__/g')
do
	file=$(echo $file | sed -e 's/__SPACE__/ /g')


	if ! svn info "$file" >/dev/null 2>&1
	then
		echo "Removing $file"
		rm "$file"
	fi
done
