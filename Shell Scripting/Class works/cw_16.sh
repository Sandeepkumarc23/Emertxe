#!/bin/bash
read -p "Enter the 2 ranges to print even numbers between them: " n1 n2
for i in `seq $((n1+1)) $((n2-1))`
do
	if [ $((i%2)) -eq 0 ]
	then
		echo -n "$i "
	fi
done
echo
