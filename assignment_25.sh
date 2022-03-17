#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:12/12/2021
Assignment name:assignment_25.sh
sample i/p: ./25_recursion.sh How are you? I am fine
sample o/p:
How
are
you?
I
am
fine
Description:Pass the command-line arguments to script.
Call the function in the script with same arguments.
Regardless of how many arguments are passed, you are allowed to echo only the first positional argument (echo $1).
Documentation

if [ $# -gt 0 ]  #To check whether CLAs passed or not.
then
	arr=($@)  #All CLAs are stored in array arr.
	n=0
	function recursive()
	{
		echo "$1"   #Printing only the first argument.
		let n=$n+1  #To end the recursive after all the arguments are considered.
		if [ $n -lt ${#arr[@]} ]  #To recurse the function till all elements are printed through the recursive function.
		then
			recursive ${arr[@]: $n}   #Giving arguments to the function recursive using array.
		else
			return   #To come out from recursive function after all CLAs are printed one by one.
		fi
	}
	recursive $1   #Calling the function first time for once.
else
	echo "Error : Pass the arguments through command line."
fi
