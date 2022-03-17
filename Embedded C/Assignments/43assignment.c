#include<stdio_ext.h>

/*
Name : Sandeep Kumar c
Date : 19/02/22
description : Suppose k = 3 (say taking 3 distinct characters ).
Let 3 distinct characters be a , b, c.
Suppose ‘n’ is the string length to be formed using ‘k’ distinct words.
Let n be 6
The string should be formed in such a way that there should not be any consecutive repetitions of the strings.
input : Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
output : Possible NRPS is abcbca
*/

void nrps(char *, int, int); //fn prototype to print NRPS...
int main()
{
	int c, n, i = 0, j; //var declarations...
	printf("Enter the number characters C : ");
	scanf("%d", &c);
	printf("Enter the Length of the string N : ");
	scanf("%d", &n);
	printf("Enter %d distinct characters : ", c);
    char str[c]; //array of characters declaration...
	while ( i < c ) //to read the characters entered by the user...
	{
		__fpurge(stdin);
		scanf("%s", &str[i]);
		i++;
	}
	int flag = 0; //To check whether unique characters are entered or not...
	for ( i = 0; i < c-1; i++ )
	{
		for ( j = i+1; j < c; j++ )
		{
			if ( str[i] == str[j] )
		    {
			    flag = 1;
			    break;
			}
		}
	}
	if ( flag != 1) //If unique characters entered then calling nrps fn...
	{
		nrps( str, n, c);
	}
	else
	{
		printf("Error : Enter distinct characters\n");
	}
	return 0;
}
void nrps ( char *str, int n, int c) //fn definition...
{
	printf("Possible NRPS is "); 
	int i,j,k = 0; //var declarations...
	while ( k < n ) // printing N characters as nrps...
	{
		j = 0;
		while ( j < c && k < n ) //all characters printing 1 by 1 till end..
		{
			putchar(str[j]);
		    k++;
			j++;
		}
		j = c-1;
	    while ( j >= 0 && k < n ) //Then printing in reverse order...
		{
			putchar(str[j]);
		    k++;
			j--;
		}
	} //Next if still k < n then repeating the process...
	printf("\n");
}
