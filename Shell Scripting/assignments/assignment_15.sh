#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:08/12/2021
Assignment name:assignment_15.sh
sample i/p: ./rename_cur_dir.sh Assign2
sample o/p: current directory will be renamed to Assign2
Description: Pass new name through command-line.
After executing this script your current directory will be renamed with the given name
Documentation

if [ $# -eq 1 ]   #To check whether CLA is passed or not
then
	pname=`basename $PWD`  #Storing current working directory name in pname variable.
    cd ..   #moving back to previous directory.
	if [ "$1" != "$pname" ]  #If given cla name is not same as current directory name then rename it.
    then
		mv $pname $1   #To change the current directory name to cla name.
		echo "current directory will be renamed to $1"
	else
		echo "Error : current directory name and $1 both are same, please pass new name"
	fi
else
	echo "Error : please pass the new directory name"
fi
