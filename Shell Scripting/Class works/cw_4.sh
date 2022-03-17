#!/bin/bash
read -p "Enter a number: " num
if [ $((num % 5)) -eq 0 ]
then
	echo "The number is multiple of 5"
else
	echo "The number is not multiple of 5"
fi
