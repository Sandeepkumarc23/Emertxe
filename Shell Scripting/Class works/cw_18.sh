#!/bin/bash
fact=1
read -p "Enter the number of which factorial has to be found: " n
for i in `seq $n`
do
	let fact=$fact\*$i
done
echo "Factorial of a given number is: $fact"
