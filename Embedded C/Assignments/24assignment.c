#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 18/01/22
description : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
input : Enter the character: a
output : The character 'a' is an alnum character.
*/
int my_isalnum(int ch) //function call to get whether character is alphanumeric or not.
{
	if ( (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) ) //Here first checking whether character entered is numeric(0-9), then uppercase alphabets(A-Z) and then for lowercase alphabets(a-z)..
	return 1;
	else
		return 0;
}
int main()
{
	char ch; int result; //var declaration to get character from the user and print the result using result varaible.
	printf("Enter the character: ");
	scanf("%c", &ch);
	result = my_isalnum(ch); //fn call and storing the return value of the function in result variable.
	if ( result ) //If result got 1 then entered character is alphanumeric.
		printf("The character '%c' is an alnum character.\n", ch);
	else
		printf("The character '%c' is not an alnum character.\n", ch);
    return 0;
}	
