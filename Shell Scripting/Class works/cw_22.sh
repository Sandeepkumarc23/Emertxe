#!/bin/bash
read -p "Enter a number: " n
flag=1
if [ $n -gt 1 ]
then
	for i in `seq 2 $((n-1))`
	do
		if [ $((n%i)) -eq 0 ]
		then
			flag=0
			break
		fi
	done
fi
if [ "$flag" -eq 1 ]
then
    echo Given number is prime
else
    echo Given number is not prime number
fi	

	  	
