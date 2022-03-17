#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_19.sh
sample i/p: ./19_delete_display_swp.sh test_swp
sample o/p: No swp files found in test_swp.
Description:Find and delete all .swp files (Temporary vi files).
If command-line directories are passed delete only from that directories
If no arguments passed display from entire ~/ directory
If no file present print a message.
Documentation

if [ $# -eq 1 ]  #Checking if cla is passed or not
then
	if [ -d $1 ]  #Checking whether directory name passed through cla is present or not.
	then
		swps=(`find $1 -name "*.swp" -type f`)  #storing all swap files in an array swps.
		if [ ${#swps[@]} -ne 0 ]  #If swap files are present then remove it.
		then
			find $1 -name "*.swp" -type f -delete   #Deletes all swap files present in that directory.
		else
			echo "No swp files found in test_swp."
		fi
	else
		echo "Error : '$1' no such a file or directory"
	fi
else
	swps=(`find ~ -name "*.swp" -type f`)  #Storing swap files from the home directory and storing it in an array.
	if [ ${#swps[@]} -ne 0 ]  #If swap files are present then just displaying it.
	then
		echo "swap file found :"
		find ~ -name "*.swp" -type f  #this just displays the swap files from the home directory if present.
	fi
fi



