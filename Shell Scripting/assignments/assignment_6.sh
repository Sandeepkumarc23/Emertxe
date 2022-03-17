#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_6.sh
sample i/p: ./06_reverse.sh 12345
sample o/p: Reversed number is 54321
Description:Read a multi-digit number from user and check only if numbers are entered.
Reverse the number.
It's not just printing in reverse order
Extract each digit and reverse the number.
Documentation

if [ $# -eq 1 ] #Checking whether cla is passed or not.
then
	len=$1   #Let len variable store the number
	if [ ${#len} -gt 1 ] #Taking only multi digit number
	then
		digit=0   #storing last digit of the number in every iteration
		rev=0    #To get the reversed number
		while [ $len -gt 0 ]    #Iterating until $len becomes 0 by which all digits will be accessed.
		do
			digit=$(($len%10))  #To get the last digi for each iteration.
			let rev=$rev\*10   #To store the place value of the number.
			let rev=$rev+$digit   #stores the number in reversed order.
			let len=$len/10    #To remove last digit for each iteration.
		done
		echo "Reversed number is $rev"
	else
		echo "Error: pass a multi-digit number"
	fi
else
	echo "Error: No arguments passed"
fi
