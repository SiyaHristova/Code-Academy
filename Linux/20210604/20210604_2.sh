#!/bin/bash
for i in $@
do
	touch $i
	if [[ -d "$i" ]]; then
		read newFile
		touch $newFile
	fi
done
