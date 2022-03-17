#!/bin/bash
read -p "Enter the total number of elements: " n 
echo "Give the numbers "
for i in `seq $n`
do
	read arr[$((i-1))]
done
small=${arr[0]}
large=${arr[0]}
for i in `seq $((n-1))`
do
	if [ ${arr[$i]} -lt $small ]
	then
		let small=${arr[$i]}
	fi
	if [ ${arr[$i]} -gt $large ]
	then
		let large=${arr[$i]}
	fi
done
echo "The largest number is $large and the smallest number is $small"
