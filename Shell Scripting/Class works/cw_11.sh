#!/bin/bash
num=1
while [ $num -le 100 -a $num -ge 1 ]
do
	echo -n "$num "
	let num=$num+1
done
echo
