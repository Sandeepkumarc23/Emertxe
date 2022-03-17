#!/bin/bash

<<Documentation
Name:Sandeep Kumar c
Date:05/12/2021
Assignment name:assignment_13.sh
sample i/p:
./13_system_info.sh
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 2
Do you want to continue (y/n) ? y
sample o/p: Your shell directory is /bin/bash
Description:Provide a menu for the user to choose the information he wants to check
Using switch case, display output for selected option.
Add continue prompt.
Documentation


q=y
while [ "$q" = "y" -o "$q" = "Y" ]  #To ask user whether wants to continue or not
do
        echo "Enter
1 for currently logged in user information.
2 to know the Shell you are using and it's path
3 to know the home directory
4 to get the OS name and it's version
5 to get the present working directory
6 to know the number of users logged in
7 to know all shells available in the system
8 to get the hard disk information
9 to get the cpu information
10 to get the memory information
11 to get the filesystem usage information
12 to know the current running processes in your system"
          read -p "Enter the choice : " ch
          case $ch in
	1)
                   	echo -e "Currently logged in user is\n`whoami`";; #To display the current logged in user
	2)
	                 echo "Your shell directory is `printenv SHELL`";; #To display the path of the Shell directory
	3)
		echo Your home directory is $HOME;;     #To print the home directory on screen
	4)
		echo -e "Your OS name and version is\n`uname -a`";;  #To print OS name and it's version
	5)
		echo Your present working directory is `pwd` ;;  #To print the present working directory
	6)
		echo -e "The numebr of logged in users are\n`who -q`" ;; #To display the number of users logged in
	7)
		echo -e "Shells available in the system are\n`cat /etc/shells`";; #To display all shells available in os
	8)
		echo -e "your hard disk information\n`hwinfo`";; #To display the hard disk information
	9)
		echo -e "Your cpu information\n`cat /proc/cpuinfo`";;  #To display the cpu information
	10)
		echo -e "Your memory info\n`cat /proc/meminfo`";;   #To display the memory information of the system
	11)
		echo -e "Your filesystem usage info\n`df -h`";; #To display the filesystem usage information
	12)
		echo -e "Your current running processes\n`ps`";; #To display the currently running processes
	*)
          		echo Error : Invalid option, please enter valid option;;
           esac
	read -p "Do you want to continue(y/n) ?" q
done