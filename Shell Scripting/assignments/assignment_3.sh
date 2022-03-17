#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:04/12/2021
Assignment name:assignment_3.sh
sample i/p: Enter the numbers to addition 10.32 20.45
sample o/p: Answer is 30.77
Description:Prompt the user to enter two numbers.
 User can enter real numbers also.
 Check if only numbers are entered.
 Use bc command and piping to do.
Documentation

read -p "Enter 2 numbers for addition: " num1 num2
sum=`echo "$num1 + $num2" | bc`
echo "Answer is $sum"	
