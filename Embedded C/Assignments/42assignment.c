#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 19/02/22
description : Read a string from the user. Check whether the string is Pangram or not
A pangram is a sentence containing every letter in the English Alphabet.
input : Enter the string: The quick brown fox jumps over the lazy dog
output : The Entered String is a Pangram String
*/

int pangram( char *); //fn prototype...
int main()
{
	char str[200]; //string declaration...
	printf("Enter the string: ");
	scanf("%199[^\n]", str);
    if ( pangram( str ) ) //If 1 then pangram string else not...
		printf("The Entered String is a Pangram String\n");
	else
		printf("The Entered String is not a Pangram String\n");
	return 0;
}
int pangram( char *str ) //fn definition to check for pangram string...
{
	int i = 0,arr[26] = {0}, count = 0; //var i to iterate all indexes of array arr, arr[26] bcoz 26 characters are present from a to z or A to Z, and initialized to 0 so rest elements are also having 0 initially, count to check if it is 26 or not, if 26 then pangram...
    while ( *str ) //Till \0 char, keep on iterating with the string...
	{
		if ((*str - 'A' == 0) || (*str - 'a' == 0)) //conditions to check for each character whether it is present in A to Z or a to z, then if present writing 1 in array arr...
			arr[0] = 1;
		else if ((*str - 'B' == 0) || (*str - 'b' == 0))
			arr[1] = 1;
		else if ((*str - 'C' == 0) || (*str - 'c' == 0))
			arr[2] = 1;
		else if ((*str - 'D' == 0) || (*str - 'd' == 0))
			arr[3] = 1;
		else if ((*str - 'e' == 0) || (*str - 'E' == 0))
			arr[4] = 1;
		else if ((*str - 'F' == 0) || (*str - 'f' == 0))
			arr[5] = 1;
		else if ((*str - 'G' == 0) || (*str - 'g' == 0))
			arr[6] = 1;
		else if ((*str - 'h' == 0)|| (*str - 'H' == 0))
			arr[7] = 1;
		else if ((*str - 'i' == 0) || (*str - 'I' == 0))
			arr[8] = 1;
		else if ((*str - 'j' == 0) || (*str - 'J' == 0))
			arr[9] = 1;
		else if ((*str - 'k'  == 0) || (*str - 'K' == 0))
			arr[10] = 1;
		else if ((*str - 'l' == 0) || (*str - 'L' == 0))
			arr[11] = 1;
		else if ((*str - 'M' == 0) || (*str - 'm' == 0))
			arr[12] = 1;
		else if ((*str - 'n' == 0) || (*str - 'N' == 0))
			arr[13] = 1;
		else if ((*str - 'o' == 0) || (*str - 'O' == 0))
			arr[14] = 1;
		else if ((*str - 'p' == 0)|| (*str - 'P'== 0))
			arr[15] = 1;
		else if ((*str - 'q' == 0) || (*str - 'Q' == 0))
			arr[16] = 1;
		else if ((*str - 'r' == 0) || (*str - 'R' == 0))
			arr[17] = 1;
		else if ((*str - 's' == 0) || (*str - 'S' == 0))
			arr[18] = 1;
		else if ((*str - 't' == 0)|| (*str - 'T' == 0))
			arr[19] = 1;
		else if ((*str - 'u' == 0) || (*str - 'U' == 0))
			arr[20] = 1;
		else if ((*str - 'v' == 0) || (*str - 'V' == 0))
			arr[21] = 1;
		else if ((*str - 'w' == 0) || (*str - 'W' == 0))
			arr[22] = 1;
		else if ((*str - 'x' == 0) || (*str - 'X' == 0))
			arr[23] = 1;
		else if ((*str - 'y' == 0) || (*str - 'Y' == 0))
			arr[24] = 1;
		else if ((*str - 'z' == 0) || (*str - 'Z' == 0))
		   arr[25] = 1;
		str++;
	}
	while ( i < 26 ) //To increment count for every 1 value in array...
	{
		if ( arr[i] == 1 )
			count++;
		i++;
	}
	if ( count < 26 ) //If count == 26 means given string contains all characters from a to z or A to Z, hence a pangram string...
		return 0;
	else
		return 1;
}
