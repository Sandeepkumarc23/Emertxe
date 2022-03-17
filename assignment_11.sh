#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:04/12/2021
Assignment name:assignment_11.sh
sample o/p: chess board will be printed on the console
Description:To print a black box: echo -e -n "\e[40m" " "
To print a white box: echo -e -n "\e[47m" " "
Call the commands in a loop.
After 8 columns make the color normal.
To make it normal: echo -e -n "\e[0m" " "
Documentation

for i in `seq 8`
do
	for j in `seq 8`
	do
		if [ $((i%2)) -eq 0 -a $((j%2)) -eq 0 ]
		then
			echo -e -n "\e[47m" " "
		elif [ $((i%2)) -ne 0 -a $((j%2)) -ne 0 ]
		then
			echo -e -n "\e[47m" " "
		else
			echo -e -n "\e[40m" " "
		fi
	done
	echo -e -n "\e[0m" " "
	echo
done
