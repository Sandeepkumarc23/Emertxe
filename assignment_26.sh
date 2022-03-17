#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:08/12/2021
Assignment name:assignment_26.sh
sample i/p: ./26_mounted_fs.sh /dev/sda2
sample o/p: File-system /dev/sda2 is mounted on / and it is having 98%
used space with 3298220 KB free.
Description: Check that given file-system is mounted or not
If its mounted, print free-space available in it.
Other-wise print error message.
Documentation

if [ $# -eq 1 ]  #To check whether cla is passed or not
then
	filesys=(`df -h | tr -s " " | cut -d " " -f1`)  #filesys array stores all filesystems present in the system.
	mnted=(`df -h | tr -s " " | cut -d " " -f6`)   #filesystems mounted on which directory will be stored in mnted array.
	usedper=(`df -h | tr -s " " | cut -d " " -f5`)  #used spaces of directories in which filesystems are present will be stored by usedper array in percent.
	avail=(`df -h | tr -s " " | cut -d " " -f4`)    #Available space in that directory will be stored in avail array.
	flag=1  #using flag var to indicate whether filesystem given by user is present in the system or not.
    for i in `seq $((${#filesys[@]}-1))`   #accessing all array elements from index 1
	do
		if [ "$1" = "${filesys[i]}" ]
		then
			echo "File-system $1 is mounted on ${mnted[i]} and it is having ${usedper[i]}
			used space with ${avail[i]} free."
			break
		else
			if [ $i -eq "$((${#filesys[@]}-1))" ]   #while going through all elements in array and even if the given filesystem is not present in the last element of the array then the given filesystem is not present.
			then
				flag=0
		    fi
		fi
	done
	if [ "$flag" -eq 0 ]   #If given filesystem name is not present in the system.
	then
		echo "$1 is not mounted."
	fi
else
	echo "Error : Please pass the name of the file-system through 
	command line."   #If cla is not given
fi
