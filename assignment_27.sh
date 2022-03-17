#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_27.sh
sample i/p:./27_ouput_ls.sh ~ ~/ECEP
sample o/p: 
/home/user:
Downloads Documents Desktop Music Pictures Public Videos
ECEP
/home/user/ECEP:
Linux_Systems Advnc_C Linux_Internals Data_Structures MC
Description:This script should work like a ls command.
 Don’t use ls command.
 Pass any number of directories through command-line.
 If no arguments passed, list current directory contents.
Documentation

if [ $# -gt 0 ]  #Checking whether cla is passed or not
then
	cont=($@)   #Storing all CLAs in an array.
	for i in ${cont[@]}   #Accessing all elements of an array
	do
		if [ -d $i ]   #To check whether the directory is present or not.
        then
			cd $i  #Going to that directory which is given as CLA. Note, kindly give the absolute path from the second cla.
			echo "`pwd`:"     #Showing the present working directory and then it's contents
		    echo *   #Listing the contents of that directory without using ls command
		else
			echo "$0: Cannot access ‘$i’ : No such a file or directory."
		fi
	done
else
	echo *
fi
