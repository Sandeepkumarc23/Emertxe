#!/bin/bash
<<Documentation
Name:Sandeep Kumar c
Date:02/12/2021
Assignment name:assignment_1.sh
sample i/p: Enter the number : 4
sample o/p:
1
1 2
1 2 3
1 2 3 4
Description: 1)Read a number from user
2) Check number is greater than 0
3) Create the pattern given
Documentation
read -p "Enter the number : " n
if [ $n -gt 0 ]
then
	for i in $(seq $n)
	do
		for j in `seq $i`
		do
			echo -n "$j "
	    done
	    echo
    done
else
	echo Error : Invalid input
fi
