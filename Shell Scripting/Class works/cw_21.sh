#!/bin/bash
read -p "Enter the number: " n
num=0
k=0
g=$n
while [ $n -gt 0 ]
do
	let k=$n%10
	let num=$num\*10
	let num=$num+$k
	let n=$n/10
done
if [ "$g" -eq "$num" ]
then
	echo The entered number is a palindrome because $g is equal to $num
else
	echo The entered number is not a palindrome because $g is not equal to $num
fi
