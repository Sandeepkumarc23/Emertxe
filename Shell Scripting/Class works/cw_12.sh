#!/bin/bash
read -p "Enter the ranges to print the numbers: " r1 r2 # r1 is range1 and r2 is range2
for i in `seq $r1 $r2`
do
	echo $i
done
