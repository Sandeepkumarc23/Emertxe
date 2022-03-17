#!/bin/bash
<<Documentation
Name:Sandeep Kumar c
Date:02/12/2021
Assignment name:assignment_2.sh
sample i/p: Enter the number : 4
sample o/p:
1
2 3
4 5 6
7 8 9 10
Description:Read a value from user
Check 2 < number < 2^5
Create the pattern as mentioned above.
Documentation
read -p "enter the number of rows: " r
count=0
if [ `echo "$r > 2"|bc` -eq 1 -a `echo "$r < 2^5"|bc` -eq 1 ]
then
	for i in `seq $r`
	do
		for j in `seq $i`
		do
			let count=$count+1 
			if [ ${#count} -gt 1 ]
			then
				echo -n "$count "
			else
				echo -n "$count  "
			fi
		done
		echo
	done
else
	echo Error : Invalid input
fi
