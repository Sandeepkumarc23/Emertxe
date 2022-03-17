#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:06/12/2021
Assignment name:assignment_17.sh
sample i/p: ./17_print_lines.sh 5 3 myfile.txt
sample o/p:
line number 5
line number 6
line number 7
Description:Pass three command-line arguments.
1st argument - starting line number.
2nd argument- number of lines and filename
Script will print n lines from the given starting line (including starting line)
Documentation

if [ $# -eq 3 ] #If 3 arguments are passed then true.
then
	if [ -e $3 ]
	then
		let a="$1+$2-1"  #Storing the value to give argument for head command and also to check whether the file has those many lines or not. 
	        line=`wc -l $3| cut -d " " -f1`  #stores the total lines value present in the file.
	        if [ $line -ge $a ]   #If file has more or equal number of lines that needs to be printed.
	        then
			head -$a $3 | tail -$2 #Getting required number of lines from the file as per the user given.
	        else
			echo "Error: $3 is having only $line lines, file should have at least $a lines."
	        fi
	else
		echo "Error : No such a file." 
	fi
else
	echo -e "Error: arguments missing!\nUsage: ./file_filter.sh start_line\nuptoline\nFor eg. ./20_file_filter.sh 5 5 <file>\nfilename"
fi
