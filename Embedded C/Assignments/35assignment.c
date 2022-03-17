#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 07/02/22
description : int my_atoi(const char *s)
The function will recieve a string and covert the number stored in the string into exact integer number.
Return the number.
input : Enter a number: 12345
output : String to integer is 12345
*/

int my_atoi(char *ptr)
{
	char *sptr = ptr; //This pointer holds base add of string which is holded initially by ptr pointer...
	//This pointer is to return 0 if first 2 characters of string are non digits ex.. +-, -+, abcd etc...
	int number = 0, flag = 1; //flag var to return +ve or -ve value
	while ( *ptr ) //Till null character the string with each character one by one is iterated...
	{
		if ( *ptr >= 48 && *ptr <= 57 ) //If string is in range of 0 to 9, this also can be done using isdigit(str) which needs stdlib.h header file...
		{
			number = (number*10)+(*ptr - 48); //number * 10 to get the place value iteration by iteration. This is the logic to get number of character from 0 to 9...(*ptr - 48)
		    ptr++;
		}
		else if ( *ptr == 43 && ptr == sptr) //if first character entered is + then no need of doing anything...
		{
			ptr++;
			continue;
		}
		else if ( *ptr == 45 && ptr == sptr) //If first character is - then flag = -1...
		{
			ptr++;
			flag = -1;
		}
		else
		{
			break; //If first character given other than 0 to 9 then have to return 0, this is what atoi fn also doing...
		}
	}
	return flag * number; //returns integer number of string to the fn call...
}
int main()
{
	char str[20];
	printf("Enter a numeric string : ");
	scanf("%s", str);
	printf("String to integer is %d\n", my_atoi(str));
	return 0;
}
