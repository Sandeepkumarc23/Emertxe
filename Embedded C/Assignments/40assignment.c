#include <stdio_ext.h> //__fpurge is used...

/*
Name : Sandeep Kumar c
Date : 09/02/22
description : Read two strings s1 and s2 from user.
Remove the characters in s1 that matches with s2.
Input string:
string 1: Dennis Ritchie
string 2: Linux
Output String:
After squeeze s1: Des Rtche
Should not use extra array or the pointer
*/

void squeeze(char*, char*); //fn prototype
int main()
{
	char str1[30], str2[30]; //string declarations	    
    printf("Enter string1:");
    scanf("%[^\n]", str1);			    
	__fpurge(stdin);  //To take the second string from the user, so clearing the input buffer...
    printf("Enter string2:");
	scanf("%[^\n]", str2);				    
    squeeze(str1, str2); //fn call
    printf("After squeeze s1 : %s\n", str1);
}
void squeeze( char *str1, char *str2)  //fn definition to squeeze characters which are present in string 2
{
	int i, j; //var declaration for controlling loops
	char temp;
	while ( *str2 ) //Accessing all characters of str2 one by one.
	{
		temp = *str2; //taking the characters in temp var
		j=0; //for every str2 characters i am comparing them with all characters of str1, j=0 initially
		while ( *(str1+j) != 0 ) //Accessing all characters of str1 till null...
		{
			if ( *(str1+j) == temp ) //If str1 char is equal to str2 char, then i have to start replacing that char with next char of str1 itself and for each time replacement, \0 is appended at last and that character which is present in str2 also will get removed from str1...
			{
				i = j; //Replacing from the character which was found present in str2 as well...
				while ( *(str1+i) != '\0' )
				{
					*(str1+i) = *(str1+i+1);
					i++;
				}
				if ( *(str1+j) == temp) //If next character found is same as prev character which got replaced (eg: nn) then this condition, where j++ not needed...
					continue;
				else
					j++;
			}
			j++;
		}
		*str2++;
	}
}
