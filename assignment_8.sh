#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:05/12/2021
Assignment name:assignment_8.sh
sample i/p: ./08_operator_dependent.sh 1234+
sample o/p: Sum of digits = 10
Description:Pass a string through command line ending with an operator.
Number can be of any length but must end with an operator character
Always do left to right operations on digits.
If 8312- passed, do 8-3-1-2 = 2
Documentation

if [ $# -gt 0 ]   #Check if CLA is passed or not
then
	num=$1  #storing the cla in num variable
	case ${num: -1: 1} in
		+)
	                sum=0      #Final value of add operation is stored in sum variable
			for i in `seq 0 $((${#num}-2))` #running loop to add all characters of the num variable string except the last one which is an operator
			do
				let sum="$sum + ${num: $i: 1}"
			done
			echo Sum of digits = "$sum";;
		-)
			j=${num: 0: 1}    #j stores the first character of string given from cla, to subtract from left to right.

			for i in `seq 1 $((${#num}-2))`  #To subtract all characters of a string when last character is "-"
			do
				let j=$j-${num: $i: 1}
			done
			echo Subtraction of digits = $j;;
		x)
			j=1     #here j stores 1 to multiply all digits of cla

			for i in `seq 0 $((${#num}-2))`  #To multiply all characters of a string when last character is "x"
			do
				let j=$((j * ${num: $i: 1}))
			done
			echo Multiplication of digits = $j;;   #Gives final value of multiplication of all characters of a string.
		/)
			j=${num: 0: 1}  #Here j stores first character of cla.

			for i in `seq 1 $((${#num}-2))`  #To divide all characters from the given string of cla when last character is "/"
			do
				let j="$j / ${num: $i: 1}"
			done
			echo Division of digits = $j;;  #gives the final value of division of all characters from left to right

		*)     #If no operator is passed then printing below message
			echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)";;
	esac
else
	echo -e "Error : Please pass the arguments through CL.\nUsage : ./09_operator_dependent.sh 2345+"   #When no CLAs are passed
fi




