#!/bin/bash
read -p "Enter the ranges: " m n
sum=0
for i in `seq $m $n`
do
	if [ $((i%2)) -ne 0 ]
	then
		let sum=$sum+$i
	fi
done
echo -n "$sum "
echo
