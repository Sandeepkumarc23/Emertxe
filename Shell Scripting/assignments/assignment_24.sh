#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:10/12/2021
Assignment name:assignment_24.sh
sample i/p:  ./24_redirection.sh
Before loop file contents
Hai hello
sample o/p: Hai hello
After loop file contents
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
.
.
.
Description:The final output becomes the input again to the command line.
Be alert, remember to stop (ctrl + c) this command before it fills your hard disk.
Look at the documentation for the tail command
Documentation

echo "Hai hello" > hello.txt | tail -f hello.txt >> hello.txt | tail -f hello.txt   #Here i am adding Hai Hello content newly to hello.txt file and then used piping to give the contents of hello.txt to "tail -f hello.txt" and then instead of displaying the contents from tail -f option, i am appending it back to hello.txt file which is creating a feedback loop infinitely. To display that, again i am using tail -f hello.txt which displays the infinite Hai hello on screen when yiu execute this script.
