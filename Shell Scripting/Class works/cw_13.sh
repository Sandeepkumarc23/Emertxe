#!/bin/bash
read -p "Enter the numbers length of which sum and average has to be calculated: " n
echo "Give the numbers "
for i in `seq $n`
do
	read arr[$((i-1))]
done
sum=0
avg=0
for i in ${arr[@]}
do
	let sum=$sum+$i
done
avg=`echo "scale=2;$sum/${#arr[@]}" | bc`
echo  "$sum is sum and $avg is the average"
