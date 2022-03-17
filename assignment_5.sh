#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:03/12/2021
Assignment name:assignment_5.sh
sample i/p: ./assignment_5.sh 5 6 8 4 2 1
sample o/p: Largest value is 8
Description:using command-line, pass n arguments.
Compare all these arguments and print the largest value.
Print error in-case no arguments.
Number of arguments can vary every time.
Documentation

if [ $# -gt 0 ]
then
	arr=($@)
        large=${arr[0]}
	for i in `seq $((${#arr[@]}-1))`
        do
		if [ ${arr[i]} -gt $large ]
	then
		let large=${arr[i]}
	fi
        done
        echo "Largest number is $large"
else
	echo "Error: No arguments passed"
fi
