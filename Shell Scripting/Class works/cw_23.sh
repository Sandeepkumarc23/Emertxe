#!/bin/bash
read -p "Enter number of rows: " r
for i in `seq $r`
do
	for j in `seq $i`
	do
		echo -n " "
	done
	for k in `seq $i $r`
	do
		echo -n "*"
	done
	echo
done
