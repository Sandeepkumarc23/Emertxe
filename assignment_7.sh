#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_7.sh
sample i/p: ./07_delete_empty_lines.sh file.txt
sample o/p: 
Empty lines are deleted.

Hello

How

are


you?
Description:Pass a filename through command-line.
Check file is empty or not. If empty print error
Delete all the empty lines from the input file and save it back.
If the line is empty with spaces or tabs you need to delete that line also.
Use sed command to delete the empty lines.
Documentation

if [ $# -eq 1 ]   #Checking whether user has given cla or not.
then
	if [ -s $1 ]  #To check whether file is empty or not.
	then
		sed -i '/^$/d' $1   #This will remove all empty lines, empty lines with tab spaces and empty lines with horizontal spaces.
		sed -i '/[[:blank:]]/d' $1   #Removes all blank spaces
		sed -i '/[[:space:]]/d' $1    #removes all spaces in a line
		echo "Empty lines are deleted"
		cat $1   #To display the contents of file after removing the empty lines.
	else
		echo "Error : file1.txt is empty, So cannot delete the empty lines."
	fi
else
	echo "Error: Please pass the file name through command line."
fi
