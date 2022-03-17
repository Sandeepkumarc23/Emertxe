#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:07/12/2021
Assignment name:assignment_20.sh
sample i/p: /20_random_password.sh
sample o/p: nH@Rh0Pv
Description:Every time, a new password must be created.
Password must contain alpha-numeric and special characters.
Documentation

cat /dev/urandom | tr -cd [:graph:] | head -c8;echo   #Here cat command is used to display the whole contents of urandom file which never endsand then using piping given to tr command which is going to print only the printable characters without space, this has been achieved with the help of class [:graph:], here i am deleting everything except printable characters without space. Now this is given to head command to print only the first random 8 characters, for each execution, new password will be generated.
