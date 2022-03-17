#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:06/12/2021
Assignment name:assignment_14.sh
sample i/p: File.txt MyScript.SH MyFile007.txt dir/ Assign1/ newfolder/
sample o/p: file.txt myfile007.txt myscript.sh DIR/ ASSIGN1/ NEWFOLDER/
Description: Rename all files from current working directory to lowercase letters.
 Rename all directories from current working directory to uppercase.
 Digits and other symbols should remain same.
Documentation

for i in `ls`  #To access all files and directories present in pwd and accessing each one of them using for loop
do
    if [ -f $i ]  #To check whether the content is file or not
	then
		new=`echo "$i" | tr [:upper:] [:lower:]`  #To store the new name for file in a variable.
		if [ "$i" != "$new" ]   #Only if new name is different than old name move the file name.
		then
			mv $i $new  #Translating file name from upper case to lowercase
		fi
	elif [ -d $i ]    #To check whether the content is directory or not.
	then
		new=`echo "$i" | tr [:lower:] [:upper:]`
	    if [ "$i" != "$new" ]  #Only if old dir name is different than new one then move the dir name to the new one.
	    then
			mv $i $new  #Translating dir name from lower to upper case.
	    fi
	fi
done
echo `ls`  #To display the modified pwd contents.
