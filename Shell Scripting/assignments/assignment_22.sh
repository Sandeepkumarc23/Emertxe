#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:06/12/2021
Assignment name:assignment_22.sh
sample i/p:  ./22_upper_lower.sh file.txt
1 – Lower to upper
2 – Upper to lower
Please select option : 1
sample o/p: WHAT IS OS?
WHAT ARE THE DIFFERENT OS?
WHEN IS OS USED?
WHAT IS PARTITION AND ITS USE?
HOW MANY PARTITIONS CAN BE DONE?
Description:Provide a filename through command-line.
Check if the file is present and it has some contents.
Ask user for conversion -  Lower to Upper / Upper to Lower.
Documentation

if [ $# -eq 1 ]
then
	if [ -e $1 ]
	then
		if [ -s $1 ]
		then
			echo -e "1 - Upper to lower\n2 - Lower to upper"  #giving user to choose any one option for case conversion of file.
			read -p "Please select option : " ch  #The choice selected by user is stored in ch variable.
			if [ $ch -eq 2 ]
			then
				cat $1 | tr [a-z] [A-Z]   #Converting file contents from lower to upper if choice is 2
			elif [ $ch -eq 1 ]
			then
				cat $1 | tr A-Z a-z   #Converting file contents from upper to lower if choice is 1
			fi
		else
			echo "Error : No contents in file"
		fi
	else
		echo "Error : file does not exist"
	fi
else
	echo "Error : Please pass the file name through command line."
fi
