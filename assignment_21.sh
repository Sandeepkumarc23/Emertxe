#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:09/12/2021
Assignment name:assignment_21.sh
sample i/p and o/p:When we start shell (whenever you opening new tab or terminal)
Good Morning user, Have nice day!
This is Thursday 08 in June of 2017 (10:44:10 AM)
Description:The script should run as soon as you log-on to the system
Print greetings based on time as follows.
"Good morning" (5 AM – 12 PM)
"Good noon" (12 PM – 1 PM)
"Good afternoon" (2 PM – 5 PM)
"Good evening" (5PM – 9 PM)
“Good night” (9 PM – 5 AM)
You can do in either 12 hr or 24 hr format.
Documentation

hour=`date +%c | tr -s " " | cut -d " " -f4 | cut -d ":" -f1`   #Storing the current system hour in hour variable.
day=`date +%A`  #Storing the present day in variable day
mon=`date +%B`  #Storing the present month in variable mon.
dte=`date +%d`  #Storing the present date in variable dte
year=`date +%Y`  #Storing the present year in variable year.
tf=`date +%r`    #Storing the present time in variable tf.
if [ $hour -ge 5 -a $hour -lt 12 ]  #If time is 5am to 12 pm then say good morning 
then
	echo -e "Good morning `whoami`, Have nice day!\nThis is $day $dte in $mon of $year ($tf)"
elif [ $hour -ge 12 -a $hour -le 13 ]   #If time is 12pm to 1pm then say good noon
then
	echo -e "Good noon `whoami`, Have nice day!\nThis is $day $dte in $mon of $year ($tf)"
elif [ $hour -ge 14 -a $hour -lt 17 ]  #If time is 2pm to 5pm then say good afternoon
then
	echo -e "Good afternoon `whoami`, Have nice day!\nThis is $day $dte in $mon of $year ($tf)"
elif [ $hour -ge 17 -a $hour -lt 21 ]   #If time is 5pm to 9pm then say good evening.
then
	echo -e "Good evening `whoami`, Have nice day!\nThis is $day $dte in $mon of $year ($tf)"
elif [ $hour -ge 21 -o $hour -lt 5 ]   #If time is 9pm to 5am then say good night
then
	echo -e "Good night `whoami`, Have nice day!\nThis is $day $dte in $mon of $year ($tf)"
fi
