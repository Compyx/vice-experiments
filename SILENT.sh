#!/bin/bash

cp $1 $1.bak
echo -e ".SILENT:\n" > $1
cat $1.bak >> $1
rm $1.bak

