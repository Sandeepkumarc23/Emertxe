#!/bin/bash
read -p " Enter the length and breadth of a geometry shape: " len bred
if [ $len -eq 0 -o $bred -eq 0 ]
then
	echo "Please give correct input"
elif [ $len -eq $bred ]
then
	echo "It is a square"
else
	echo "It is a rectangle"
fi
