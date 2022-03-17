#!/bin/bash
read -p "Enter a number to check whether it is in range : " num
if [ $num -lt 30 -a $num -gt 40 ]
then
	echo "The given number is out of range"
else
	echo "The given number is in the range"
fi
