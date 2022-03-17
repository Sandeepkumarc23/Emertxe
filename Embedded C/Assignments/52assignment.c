#include <stdio_ext.h>
#include<stdlib.h>

/*
Name : Sandeep Kumar c
Date : 07/03/22
description : Read the N name from the user
Sort it in alphabetical order
Use 1st dynamic and 2nd static. Char (*name)[32]
No.of names should be dynamic and no.of characters should be static.
Allocate the memory dynamically for no.of names.
input : Enter the size: 5
Enter the 5 names of length max 32 characters in each
Delhi
Agra
Kolkata
Bengaluru
Chennai
output : The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/

void sort_names(int, char **);  //fn prototype...
int main()
{
	int size, i, j;  //var declns
	char (*names)[32];  //pointer to an array with fixed col size of 32...
	printf("Enter the size: ");
	scanf("%d", &size);
	names = malloc( size * sizeof(*names));  //DMA for rows...
	printf("Enter the 5 names of length max 32 characters in each\n");
	char *ptr[size]; //array of pointers to point to each string...
	for ( i = 0; i < size; i++ )
	{
		__fpurge(stdin);
		scanf("%31[^\n]", names[i]); //reading strings from the user
		ptr[i] = names[i]; //Also storing the base addr of strings into an array of pointers...
	}
	sort_names(size, ptr); //fn call to sort the names...
	return 0;
}
void sort_names(int size, char **ptr) //fn definition to sort the names...
{
	int i, j, k; //var declns...
	char *temp;  //temp ptr to swap the addr...
	for ( i = 0; i < size; i++ ) //sorting using bubble sort technique...
	{
		for ( j = 0; j < size-1-i; j++ )
		{
			k = 0;
			while ( ptr[j][k] == ptr[j+1][k] && ptr[j][k] != '\0' && ptr[j+1][k] != '\0' )  //string comparisons to sort
			{
				k++;
			}
			if ( (ptr[j][k] - ptr[j+1][k]) > 0 ) //if string difference is > 0 then only need to sort...
			{
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
	printf("The sorted names are:\n");
	for ( i = 0; i < size; i++ )  //printing the array in sorted manner...
	{
		printf("%s\n", ptr[i]);
	}
}
