#!/bin/bash
read -p "Enter the 2 ranges to print even numbers between them: " n1 n2
for i in `seq $((n1+1)) 2 $n2`
do
	echo -n "$i "
done
echo
