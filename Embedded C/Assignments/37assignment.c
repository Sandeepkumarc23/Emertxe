#include <stdio.h>
#include<string.h> //To include strlen() in the program

/*
Name : Sandeep Kumar c
Date : 07/02/22
description : Read a string from user.
Implement using loops.
Do not print character by character.
input : Enter a string : Hello World
output : Reverse string is : dlroW olleH
*/

void reverse_iterative(char *str);
int main()
{
	char str[30];	 //string declaration   
    printf("Enter any string : ");
    scanf("%[^\n]", str);	    
    reverse_iterative(str);	 //fn call to reverse the string...				    
	printf("Reversed string is %s\n", str);
}
void reverse_iterative(char *str) //fn definition to reverse the string...
{
	int i, j = 0; char temp; //var declarations
	for ( i = strlen(str)-1; i > (strlen(str)-1)/2; i--) //logic to reverse the string, loop should run half the times of string length to reverse the string...
	{
		temp = *(str+j);
		*(str+j) = *(str+i);
        *(str+i) = temp;
		j++;
	}
}
