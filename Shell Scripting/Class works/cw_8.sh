#!/bin/bash
read -p "Enter 2 integers: " num1 num2
if [ $((num1%num2)) -eq 0 ]
then
	echo "First number is multiple of second"
else
	echo "First is not multiple of second"
fi
