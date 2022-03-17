#!/bin/bash
sum=0
read -p "Enter the digit: " n
for i in `seq ${#n}`
do
	let	sum=$sum+${n: $(($i-1)): 1}
done
echo $sum
