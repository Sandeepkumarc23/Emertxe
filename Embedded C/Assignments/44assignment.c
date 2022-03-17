#include<stdio.h> 

/*
Name : Sandeep Kumar c
Date : 20/02/2022
description : Read a string from the user, find and print all the possible combinations of given string.
input : Enter a string: abc
output : All possible combinations of given string :abc
acb
bca
bac
cab
cba
*/

void combination(char *,int ,int );  //fn prototype to print all combinations of the string...
int my_strlen(char*);  //fn prototype to find length of the string...
int main()
{
	char str[100];
	int n, i;
	printf("Enter a string: ");					
	scanf("%100[^\n]",str);	
	n = my_strlen(str);											
	int flag = 0; //To check whether unique characters are entered or not...
	for ( i = 0; i < n-1; i++ )
	{
		for (int j = i+1; j < n; j++ )
		{
			if ( str[i] == str[j] )
		    {
			    flag = 1;
			    break;
			}
		}
	}
	if ( flag != 1) //If unique characters entered then calling combination fn...
	{
	    combination(str,0,n-1);
	}
	else
	{
		printf("Error: please enter distinct characters.\n");
	}
	return 0;
}
int my_strlen( char *str ) //to find length of string...
{
	int length = 0;
    while ( *str )
	{
		length++;
		str++;
	}
	return length;
}
void combination ( char *str, int first, int last ) 
{
	int fact = 1, i = 1; 
	while ( i <= last+1) //First need to find factorial of length of string to print all combinations of the string...
	{
		fact = fact * i;
		i++;
	}
	i = 0;
	printf("All possible combinations of given string :");
	char temp;
	while ( i < fact )
	{
		printf("%s\n", str);
		if ( i % 2 == 0 ) //To alternatively swap 2 different indexes for each iteration...
		{
			temp = str[first+1];
		    str[first+1] = str[last];
			str[last] = temp;
		}
		else
		{
			temp = str[first];
			str[first] = str[last];
			str[last] = temp;
		}
		i++;
	}
}
