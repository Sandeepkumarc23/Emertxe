#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 31/01/2022
description : Read n and n no.of elements from user and store them into an array.
Run a loop for printing the elements in sorted order.
input : Enter the size : 5
Enter 5 elements 
10 1 3 8 -1
output : After sorting: -1 1 3 8 10
Original array values 10 1 3 8 -1
*/

void sorted_array( int *ptr, int size ) //function to print array values in sorted order without modifying the element of array...
{
	int i, j, temp1, temp2 = -99999999; //temp1 variable to store max value for each sorted element and temp2 to store minimum value for first sorted ele(smallest ele)...
	printf("After sorting: ");
	for ( i = 0; i < size; i++ )
	{
		temp1 = 999999999; //so for each small element temp1 will be initialized to 999999999...
	    for ( j = 0; j < size; j++ )
	    {
			if ( *(ptr + j) < temp1 && *(ptr + j) > temp2 ) //condition to get elements in ascending order after completion of the loop...
			{
				temp1 = *(ptr + j); //holds ascending order sorted elements after each for loop...
			}
		}
		printf("%d ", temp1); //printing elements in sorted order...
	    temp2 = temp1;	//temp2 to takes temp1 so that next smaller element can be found...
	}
}
int main()
{
	int size, i; //var declaration to get size of array, i control var to use it in for loop...
	printf("Enter the size : ");
	scanf("%d", &size);
	int array[size];
	printf("Enter %d elements\n", size);
	for ( i = 0; i < size; i++ )
	{
		scanf("%d", &array[i]);
	}
	sorted_array( array, size ); //fn call which prints elements in sorted order ( ascending order ) without modifying the array...
	printf("\nOriginal array values ");
	for ( i = 0; i < size; i++ )
	{
		printf("%d ", array[i]); //gets confirmed that array elements were not modified...
	}
	printf("\n");
	return 0;
}
