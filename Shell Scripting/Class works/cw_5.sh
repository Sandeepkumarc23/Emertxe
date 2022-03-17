#!/bin/bash
read -p "Enter the 3 sides of a triangle: " hyp b o
if [ $((hyp*hyp)) -eq $((b*b + o*o)) ]
then
	echo "It is a right angled triangle"
elif [ $((b*b)) -eq $((hyp*hyp + o*o)) ]
then
	echo "It is a right angled triangle"
elif [ $((o*o)) -eq $((hyp*hyp + b*b)) ]
then
	echo "It is a right angled triangle"
else
	echo "It is not a right angled triangle"
fi
