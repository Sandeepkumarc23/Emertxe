#include <stdio.h>
#include<string.h> //To include strlen()

/*
Name : Sandeep Kumar c
Date : 07/02/22
description : Read a string from user.
Implement using recursive function without using any loops
Do not print character by character.
input : Enter a string : Hello World
output : Reverse string is : dlroW olleH
*/

void reverse_recursive(char *str, int, int); //fn prototype...
int main()
{
	int i,j = 0;  //var declaration to access the characters of the string using base address...
	char str[30];		//string declaration...     
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    i = strlen(str)-1;	//to fetch the character present in last address, forget about \0 for now...
    reverse_recursive(str, i, j);   //fn call with base add of string and address of first and last character initially to swap...				    
	printf("Reversed string is %s\n", str);
}
void reverse_recursive(char *str, int i, int j)   //fn definition to reverse the string...
{
	char temp;  //var declaration to swap the characters..
	if ( i >= strlen(str)/2 )  //condition to call recursive fn 
	{
		temp = *(str+i); 
		*(str+i) = *(str+j);
		*(str+j) = temp;
		i--, j++;
		reverse_recursive(str, i, j);
	}
}
