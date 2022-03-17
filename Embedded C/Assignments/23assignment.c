#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 18/01/22
description : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
islower() - checks for a lowercase alphabet.
input : Enter the character: 3
output : Entered character is not lower case alphabet.
*/
int my_islower(int ch) //Fn definition to check whether entered character is lower case alphabet or not.
{
	if ( ch >= 97 && ch <= 122 ) //ascii value of lower case characters range from 97 to 122.
	   return 1;
    else
	    return 0;
}	
int main()
{
	char ch; int result; //local var declaration to store the character from user and to give the result whether it is lower case alphabet or not.
	printf("Enter the character: ");
	scanf("%c", &ch);
    result = my_islower(ch); //fn call whose return value is stored in result variable.
	if ( result ) //If result got 1 then lower case char given
		printf("Entered character is lower case alphabet\n");
	else
		printf("Entered character is not lower case alphabet\n");
	return 0;
}
/*This can also be impleted using builtin function islower() using ctype.h header file
  */
