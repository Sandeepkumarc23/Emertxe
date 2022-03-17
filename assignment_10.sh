#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:04/12/2021
Assignment name:assignment_10.sh
sample i/p: ./10_string_length.sh hello hai how are you?
sample o/p:
Length of string (hello) - 5
Length of string (hai) - 3
Length of string (how) - 3
Length of string (are) - 3
Length of string (you?) - 4
Description: Pass some names or strings through command-line.
Print all the strings' length one-by-one.
Number of arguments may vary.
Documentation

if [ $# -gt 0 ]
then
	arr=($@)
	for i in ${arr[@]}
	do
		echo "Length of string ($i) - ${#i}"
	done
else
	echo "Error : Please pass the arguments through command-line."
fi
