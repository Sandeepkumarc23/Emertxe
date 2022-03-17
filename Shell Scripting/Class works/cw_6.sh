#!/bin/bash
read -p "Give the year to check for leap year: " yr
if [ $((yr % 400)) -eq 0 ]
then
	echo "It is a leap year"
elif [ $((yr % 100)) -eq 0 ] 
then
	echo "It is not a leap year"
elif [ $((yr % 4)) -eq 0 ]
then
	echo It is a leap year
else
	echo It is not a leap year
fi
