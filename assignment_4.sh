#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:04/12/2021
Assignment name:assignment_4.sh
sample i/p: assignment_4.sh 25 + 41
sample o/p: 25 + 41 = 66 
Description:User must provide two numbers and operator through command-line
Based on input do the operation and display the output.
Use case to handle multiple operations
Use expr or bc command
Documentation

if [ $# -gt 0 ]
then
	case $2 in
		+)
			sum=`echo "$1 + $3" | bc`
		        echo "$1 $2 $3 = $sum"
		        ;;
	        -)
		        sub=`echo "$1 - $3" | bc`
		        echo "$1 $2 $3 = $sub"
		        ;;
	        x|\*)
		        mul=`echo "$1 * $3" | bc`
		        echo "$1 $2 $3 = $mul"
		        ;;
		/)
			div=`echo "$1 / $3" | bc`
		        echo "$1 $2 $3 = $div"
		        ;;
	        *)
			echo -e "Error:Please pass 3 arguments.\nUsage:./04_arithmatic_calc 2.3 + 6.7"
			;;
	esac
else
	echo -e "Error : Please pass the arguments through command line.\nUsage:./04_arithmatic_calc 2.3 + 6.7"
fi
