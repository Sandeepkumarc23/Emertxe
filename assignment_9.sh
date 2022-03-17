#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:03/12/2021
Assignment name:assignment_9.sh
sample i/p: Enter the limit : 10
sample o/p: 0, 1, 1, 2, 3, 5, 8
Description: Read a number from the user and validate only if a number is entered
Remember 'n' is not number of elements to print
It's the boundary of elements to be printed
Documentation

first=0
second=1
next=0
read -p "Enter the limit : " n
if [ $n -gt 0 ]
then
	while [ $next -le $n ]
	do
		echo -n "$next"
	        first=$second
		second=$next
	        let next=$first+$second
		if [ $next -le $n ]
		then
			echo -n ", "
		fi
        done
else
	echo "Error : Please enter only positive numbers."
fi
