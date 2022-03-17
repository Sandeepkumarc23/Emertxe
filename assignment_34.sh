#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:03/12/2021
Assignment name:assignment_34.sh
sample i/p: Enter the number : 
Enter the weight in Kg : 45.5
Enter the height in m :  1.5
sample o/p:
You are NORMAL
Description:Ask user to enter two numbers
Validate the numbers, whether only the numbers are entered.
User can enter real numbers also.
Used bc command and piping.
Documentation

read -p "Enter the weight in Kg and height in meters : " wei hei
if [ `echo "$wei > 0" | bc` -eq 1 -a `echo "$hei > 0" | bc` -eq 1 ]
then
	BMI=`echo "$wei/($hei^2)" | bc`
        if [ `echo "$BMI < 18.5" | bc` -eq 1 ]
        then
		echo You are UNDERWEIGHT
        elif [ `echo "scale=2;$BMI >= 18.5" | bc` -eq 1 -a `echo "scale=2;$BMI <=24.9" | bc` -eq 1 ]
        then
		echo You are NORMAL
        elif [ `echo "scale=2;$BMI >= 25" | bc` -eq 1 ]
        then    
		echo "the person is Overweight"
	fi
else
	echo Invalid Input
fi
