#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_23.sh
sample i/p: ./23_print_fifth_line file.txt
sample o/p: Fifth line of file.txt is line 5
Description:Pass the filename through command line.
Check if file is already exist or not and check the contents are available or not.
If the no. of lines is less than 5 then print the error.
Documentation

if [ $# -eq 1 ]    #If file is given as only argument
then
	if [ -e $1 ]   #If that file given in cla exists in pwd 
	then
		line=`wc -l $1 | cut -d " " -f1`  #To store the number of lines value in line var
		if [ $line -ge 5 ]    #If the file lines are greater or equal to 5th line
		then
			echo "Fifth line of $1 is `head -5 $1 | tail -1`"
	        else
			echo "Error : $1 having only $line lines. So can’t print 5th line."
		fi
	else
		echo "Error : No such a file."
	fi
else
	echo "Error : Please pass the file name in command line."
fi