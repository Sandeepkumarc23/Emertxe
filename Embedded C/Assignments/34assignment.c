#include <stdio.h>

/*
Name : Sandeep Kumar c
Date : 07/02/22
description : int getword(char *word)
Create a function named getword.
Function will receive the string from main
Function should return the length of the first word.
input : Enter the string : Welcome to Emertxe
output : You entered Welcome and the length is 7
*/

int getword(char *str); //fn prototype to get the length of the first word in the string...
int main()
{
	int len = 0; //var initialization to hold the length of the string...
    char str[100]; //str string to take the string input from the user...
	printf("Enter the string : ");
    scanf(" %[^\n]", str);
	len = getword(str); //fn call 
	printf("You entered %s and the length is %d\n", str, len);
}
int getword(char *str) //fn definition to get the 1st string length...
{
	int length = 0;
	while ( *str != ' ' && *str != '\0') //condition to stop incrementing the length count if it is null char or space char...
	{
		*str++;
        length++;
	}
	if (*str == ' ') //while printing the string in the main fn i have to just print the first string, so this statement...
		*str = '\0';
	return length;
}
