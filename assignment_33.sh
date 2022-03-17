#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:12/12/2021
Assignment name:assignment_33.sh
sample i/p:  ./33_replace<DEL>.sh main.c
sample o/p:
Before replacing
#incude <stdio.h>
int main()
{
         printf(“Hello world\n”);
}
After replacing
#incude <stdio.h>
int main()
{
<-----------Deleted------------>
}
Description:Provide a.c file to this script through command-line.
Check the given file exists or not and check if it has some contents in it.
Randomly replace 20% lines from the file with given pattern / string. <-----------Deleted------------>
Documentation

if [ $# -eq 1 ]  #to check whether cla is passed or not.
then
	if [ -f $1 ]  #Checking whether the cla passed is a file or not.
	then
		if [ -s $1 ]  #checking whether the file has contents in it or not.
		then
			lines=`wc -l $1 | cut -d " " -f1` #Storing the total number of lines present in the given file in lines variable using wc -l command and piping it to cut command to extract only the number of lines.
			if [ $lines -ge 5 ]  #Only if total number of lines are greater than or equal to 5, we can replace the 20% of the file.
			then
				replace_line=$(($lines*2/10))  #Storing the 20% lines value in a var replace_line.
				arr=(`shuf -i 1-$lines`)  #Storing all the line  numbers in an array randomly.
				echo "Before replacing"
				cat $1   #Showing the contents of file before replacing it's 20%.
				for j in `seq 0 $(($replace_line-1))`   #Iterating till the number of lines that has to be replaced.
				do
					sed -i ${arr[j]}'s/.*/<-----------Deleted------------>/g' $1   #Substituting all contents of lines to the given pattern.
                done
				echo "After replacing"
				cat $1   #Showing the content of the file after replacing it's 20% contents.
			fi
		else
			echo "Error : $1 is empty file. So can’t replace the string."
		fi
	else
		echo "Error : No such a file."
	fi
else
	echo "Error : Please pass the file name through command line."
fi
