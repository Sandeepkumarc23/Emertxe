#!/bin/bash
echo "BMI means body mass index which tells whether you are physically fit or not"
read -p "Enter the weight(KG) and Height(m): " wei hei
BMI=`echo "scale=2;$wei/($hei^2)" | bc`
if [ `echo "scale=2;$BMI < 18.5" | bc` -eq 1 ]
then
	echo The person is Underweight
elif [ `echo "scale=2;$BMI >= 18.5" | bc` -a `echo "scale=2;$BMI <=24.9" | bc` -eq 1 ]
then
	echo The person is normal
elif [ `echo "scale=2;$BMI >= 25" | bc` -a `echo "scale=2;$BMI <= 29.9" | bc` -eq 1 ]
then
	echo "the person is Overweight"
else
	echo "The person is Obese"
fi
