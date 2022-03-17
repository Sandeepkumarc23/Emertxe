#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:04/12/2021
Assignment name:assignment_11.sh
sample o/p: chess board will be printed on the console
Description:To print a black box: echo -e -n "\e[40m" " "
To print a white box: echo -e -n "\e[47m" " "
Call the commands in a loop.
After 8 columns make the color normal.
To make it normal: echo -e -n "\e[0m" " "
Documentation

if [ $# -gt 0 ]
then
	arr=($@)
	len=${#arr[@]}
	if [ "${arr[0]}" = "-a" ]  # For ascending order sorting
	then
		for i in `seq 1 $((len-1))`
		do
			j=1          # j is the pointer which access array elements with index positions. 
			while [ $j -lt $((len-num-1)) ]
			do
				if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
				then
					temp=${arr[j]} #temp variable is to store one of the array elements temporarily to swap the 2 elements
				        arr[j]=${arr[$((j+1))]}
				        arr[$((j+1))]=$temp
				fi
			let j=$j+1
		        done
		done
		echo "Ascending order of array is ${arr[@]}"	
	elif [ "${arr[0]}" = "-d" ]  # For descending order sorting of array
	then
		for i in `seq 1 $((len-1))`
		do
			j=1          # j is the pointer which access array elements with index positions. 
			while [ $j -lt $((len-num-1)) ]
			do
				if [ ${arr[j]} -lt ${arr[$((j+1))]} ]
				then
					temp=${arr[j]}
				        arr[j]=${arr[$((j+1))]}
				        arr[$((j+1))]=$temp
				fi
			let j=$j+1
		        done
		done
		echo "Descending order of array is ${arr[@]}"
	else
		echo -e "Error : Please pass the choice.\nUsage : ./12_sorting -a/-d 4 23 5 6 3"
	fi
else
	echo -e "Error : Please pass the argument through command line.\nUsage : ./12_sorting -a/-d 4 23 5 6 3"
fi

