#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:08/12/2021
Assignment name:assignment_29.sh
sample i/p: . /29_free_space.sh
sample o/p: Filesystem /dev/sda5 have less than 10% free space
Description: When you run the script show all file-system present in system.
 Then print file-systems that have only 10% memory remaining.
Documentation

filesys=(`df | tr -s " " | cut -d " " -f1`)  #filesys array stores only the filesystem names.
for j in ${filesys[@]}   #To show all available filesystems in the device
do
	echo "$j"
done	
useper=(`df | tr -s " " | cut -d " " -f5 | cut -d "%" -f1`)   #I am getting only used percent of filesystem and storing it in an array.
for i in `seq $((${#useper[@]}-1))`  #accessing all elements of array except 1st element because it is an heading "use%" which is not needed.
do
	if [ ${useper[i]} -ge 90 ]
	then
		echo "Filesystem ${filesys[i]} have less than 10% free space"
	fi
done