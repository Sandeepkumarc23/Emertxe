#!/bin/bash
a=0
b=1
sum=0
read -p "Enter the numbers length to print fibonacci series upto: " n
echo "$a
$b"
for i in `seq 2 $n`
do
	let sum=$a+$b
	let a=$b
	let b=$sum
	echo $sum
done
