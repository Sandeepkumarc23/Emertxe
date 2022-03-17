#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:10/12/2021
Assignment name:assignment_16.sh
sample i/p: ./16_rename_album.sh day_out
sample o/p: All .jpg files in current directory is renamed as
day_out001.jpg day_out002.jpg day_out003.jpg day_out005.jpg day_out004.jpg
Description: Aim of this assignment is to rename all files in one directory with a common name and indexing.
Usually when we take pictures in camera or mobile default names will be like,  DSN001.jpg, DSN002.jpg
These files need to be renamed by user given prefix name
Prefix name should be passed through command-line.
Documentation

if [ $# -eq 1 ]  #To check if CLA is passed or not
then
	arr=(`ls`) #Storing all the contents of present directory in an array
	for i in ${arr[@]}
	do
		x=`echo "$i" | cut -d "." -f1 | tr -d [:alpha:]`  #To retain only number and storing it in a variable x.
		b=.jpg
        mv "$i" "$1$x$b"
	done
	echo "All .jpg files in current directory is renamed as"
	ls
else
	echo "Error : Please pass the prefix name through command line."
fi
