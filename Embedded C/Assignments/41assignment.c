#include <stdio.h>
#include <stdio_ext.h> //include __fpurge();

/*
Name : Sandeep Kumar c
Date : 19/02/22
description : Read string1 and string2 from user.
Call my_strtok (string1, string2);
Should treat string2 as delimitter in string1 and should return 1 st field.
If you call again my_strtok (NULL, string2), it should return second field in string1 treating string2 as delimitter.
input : Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
output : Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai
*/

char *my_strtok(char * str, const char *delim); //fn prototype of user defined strtok fn...
int main()
{
	char str[500], delim[500];	    //string declration...
    printf("Enter the string  : ");
	scanf("%499[^\n]", str);				    
	__fpurge(stdin);				 
	printf("Enter the delimeter : ");
	scanf("%499[^\n]", delim);
	__fpurge(stdin);							    
	char *token = my_strtok(str, delim); //First time fn call
	printf("Tokens :\n");				
	while (token) //If token != NULL then printing string...
	{
		printf("%s\n", token);
		token = my_strtok(NULL, delim); //2nd time fn call with NULL as 1st arg, which is given in same way for strtok fn...
	}
}
char *my_strtok(char *str, const char *delim) //fn definition...
{
	int j = 0; //To iterate delim string till '\0'
	static int i; //To iterate main string till '\0'..Static var bcoz to continue with next character after replacing \0 char when token found in string...
	static char *temp; //To take the base addr of main string initially and keep moving with next characters...
	int length = i; //This var actually confirms whether both prev and present char are \0, if yes then without returning any addr, moving with next char in string...
	if ( str != NULL ) //If str is not equal to NULL addr then temp takes addr of str, for first time when fn called...
	{
		temp = str;
	}
	while ( temp[i] != '\0') //Iterating with all characters from main string and checking for tokens...
	{
		j = 0;
		while ( delim[j] != '\0' ) //Iterating all tokens with each char of main string and if found equal then replacing it...
		{
			if ( delim[j] == temp[i] ) //If token found in string...
			{
				temp[i] = '\0'; //Making that char in string as \0...
				i++; //Then moving with next char...
				if ( temp[length] != '\0') //If the prev char was not \0, then returning the base addr for first and then addr after \0...
				{
					return (&temp[length]);
				}
				else
				{
					length = i; //If prev char and present char became \0, then just moving with next char...
					i--; //To compensate i++ present after inner while loop...
					break; //breaks from inner while loop
				}
			}
			j++;
		}
		i++;
	}
	if ( temp[length] == '\0' ) //If \0 has been reached in main string then returning NULL as per behaviour of strtok fn...
	{
		//i = 0;
		return NULL;
	}
	else
	{
		return (&temp[length]); //returning the addr...
	}
}
