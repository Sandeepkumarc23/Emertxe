#!/bin/bash
echo  "Enter English subject marks: "; read eng; echo "Enter Maths subject marks: "; read mat;  echo "Enter Science subject marks: ";  read sci;
sum=$((eng+mat+sci))
if [ $sum -lt 50 ]
then
	echo "Student has failed"
elif [ $sum -ge 50 -a $sum -le 100 ]
then
	echo "Student is average"
else
	echo "Student is excellent"
fi
