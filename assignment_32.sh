#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:08/12/2021
Assignment name:assignment_32.sh
sample i/p: ./32_user_present.sh xyz
sample o/p:xyz not present
Description:  Fetch user-names from the first field in /etc/passwd file.
 Search given name in the list.
Documentation

if [ $# -eq 1 ] #To check whether cla is passed or not
then
	names=(`cut -d ":" -f1 /etc/passwd`)   #Storing usernames present in the system
	for i in ${names[@]}
	do
		if [ "$1" = "$i" ]
		then
			echo "$1 is present"
			exit
		fi
	done
	echo "$1 not present"
else
	echo "Error : Please pass the argument through command line."
fi
