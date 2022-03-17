#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:10/12/2021
Assignment name:assignment_28.sh
sample i/p: ./28_lock_permissions.sh Dir/
sample o/p:
Before locking
total 0
-rw-rw-r-- 1 biju biju 0 Jun
-rw-rw-r-- 1 biju biju 0 Jun
-rw-rw-r-- 1 biju biju 0 Jun
8 12:37 D2file1
8 12:37 D2file2
8 12:37 D2file3
After locking
total 0
-rw------- 1 biju biju 0 Jun 8 12:37 D2file1
-rw------- 1 biju biju 0 Jun 8 12:37 D2file2
-rw------- 1 biju biju 0 Jun 8 12:37 D2file3
Description:  Provide directory name through command-line.
 Remove all permissions for groups and others.
 But remember don’t add any permission to user, only change permissions to others and groups.
Documentation

if [ $# -eq 1 ] #To check whether cla is passed or not
then
	echo "Before locking"
	ls -l $1/   #To display the file permissions and many more before locking the permissions for groups and others.
	chmod -R go-rwx $1/    #To remove all permissions for groups and others for the directory and it's contents.
   echo "After locking"
   ls -l $1/   #displaying the permissions of all the contents present in the given directory after locking it.
else
	echo "Error : Please pass the directory in command line"
fi
