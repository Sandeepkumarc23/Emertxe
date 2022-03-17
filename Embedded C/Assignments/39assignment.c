#include <stdio.h>

/*
Name : Sandeep Kumar c
Date : 08/02/22
description : Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.
You need to print he final output in main
Please use the prototype given below:
 void fun(int *arr1, int size, int *arr2, int *new_size);
input : Enter the size: 5
Enter elements into the array: 5 1 3 1 5
output : After removing duplicates: 5 1 3
*/

void fun(int *arr1, int size, int *arr2);  //fn prototype to remove the duplicate elements in the array...
int main()
{	
	int size, new_size, i; //var declarations
	printf("Enter the size: ");
	scanf("%d", &size);
	int arr1[size];
	int arr2[size];
	printf("Enter elements into the array: ");
	for ( i = 0; i < size; i++ )
	{
		scanf("%d", &arr1[i]);
	}
	fun(arr1, size, arr2);  //fn call...
	printf("After removing duplicates: ");
	for ( i = 0; i < size; i++)
	{
		if ( arr2[i] != 0 )  //if array elements are non-zero then printing them...
			printf("%d ", arr2[i]);
	}
	printf("\n");
}
void fun(int *arr1, int size, int *arr2)  //fn definition
{
	int i, j,first_ele, index;  //var declarations
	for ( i = 0; i < size-1; i++ )
	{
	    first_ele = arr1[i];
		index = i;
		for ( j = index+1; j < size; j++ )
		{
			if ( first_ele == arr1[j] )  //if duplicates found then making the duplicate element 0...
				arr1[j] = 0;
		}
	}
	for ( i = 0; i < size; i++ )
	{
			arr2[i] = arr1[i];  //just copying the elements from 1 array to other...Here arr1 and arr2 are pointers...
	}
}
