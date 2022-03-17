#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:08/12/2021
Assignment name:assignment_18.sh
sample i/p:./18_largest_username.sh /etc/passwd
sample o/p: The Longest Name is: speech-dispatcher
The Shortest Name is:lp
Description: Fetch user-names from the first field in /etc/passwd file.
Print longest and shortest name.
Documentation

if [ $# -eq 1 ]   #checking whether cla is passed or not in the command line.
then
	names=(`cut -d ":" -f1 $1`)   #Storing all the usernames present in the system in names array using cut command.
	small=${#names[0]}   #let me store the first element length of an array in small variable.
	shortnm=${names[0]}   #Storing first element of an array in shortnm variable which is later used to update based on the short length.
	large=${#names[0]}   #Let me store the first element length of an array in large variable as well.
	lgnm=${names[0]}    #Storing first element of an array here as well in lgnm variable which is used to update based on the large length.
	for i in `seq $((${#names[@]}-1))`  #Iterating from second element of array till last element.
	do
		if [ ${#names[i]} -lt ${small} ]  #Comparing 2 elements of an array
		then
			small=${#names[i]}     #small gets updated with the smaller length of an array element.
			shortnm=${names[i]}    #smaller length variable element will be updated here.
		fi
		if [ ${#names[i]} -gt ${large} ]  #comparing 2 elements of an array for larger length.
		then
			large=${#names[i]}   #large gets updated with larger length of an array element.
			lgnm=${names[i]}  #lgnm gets updated with the element with larger length.
		fi
	done
	echo "The Longest Name is: $lgnm"
	echo "The Shortest Name is:$shortnm"
else
	echo "Error : Invalid number of arguments, Please pass only user information file through CL"
fi
