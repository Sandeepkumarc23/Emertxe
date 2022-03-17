#!/bin/bash
read -p "Enter 2 numbers: " num1 num2
product=$((num1*num2))
if [ $((product % 2)) -eq 0 ]
then
	echo "The product is even"
else
	echo "The product is odd"
fi
