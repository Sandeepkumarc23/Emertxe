#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 18/01/22
description : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isblank() - checks for a blank character; that is, a space or a tab.
input : Enter the character: a
output : The character 'a' is not a blank character.
*/
int my_isblank(int ch) //Fn definition to check whether entered character is blank or not.
{
	if ( ch == 32 || ch == 9 ) //ascii value of space is 32 and horizontal tab is 9.
	   return 1;
    else
	    return 0;
}	
int main()
{
	char ch; int result; //local var declaration to store the character from user and to give the result whether it is blank space or not.
	printf("Enter the character: ");
	scanf("%c", &ch);
    result = my_isblank(ch); //fn call whose return value is stored in result variable.
	if ( result ) //If result got 1 then blank space character
		printf("The character '%c' is a blank character.\n", ch);
	else
		printf("The character '%c' is not a blank character.\n", ch);
	return 0;
}
/*This can also be impleted using builtin function isblank() using ctype.h header file
  */
