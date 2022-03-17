#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 04/12/21
description : In probability theory and statistics, a median is described as the number separating the higher half of a sample, a population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by arranging all the numbers from lowest value to highest value and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
input : Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
output : Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
*/

int main()
{
	int m,n,i,j,median,medianA,medianB;   //m and n are array size for arrA and arrB respectively, median is just index pos of median ele of arrA and arrB if both size are odd and medianA, medianB is median elements for the same..
	float medianevenA, medianevenB;  //median ele for even number of array elements A and B respectively..
	printf("Enter the 'n' value for Array A: ");
	scanf("%d", &m);
	printf("Enter the 'n' value for Array B: ");
	scanf("%d", &n);

	int arrA[m], arrB[n];  //2 arrays has been declared for now..
    printf("Enter the elements one by one for Array A: ");
	for ( i = 0; i < m; i++) //iterating from index 0 to last index of arrA to read arrA
	{
		scanf("%d", &arrA[i]);
	}	
    printf("Enter the elements one by one for Array B: ");
	for ( i = 0; i < n; i++ )  //iterating from index 0 to last index of arrB to read arrB
	{
		scanf("%d", &arrB[i]);
	}
    int temp;  //temp var to sort array using bubble sort technique
	for ( i = 0; i < m; i++ )  //first sorting the arrA before finding it's median value, used bubble sort
	{
		for ( j = 0; j < (m-i-1); j++ )
		{
			if ( arrA[j] > arrA[j+1] )
			{
				temp = arrA[j];
				arrA[j] = arrA[j+1];
				arrA[j+1] = temp;
			}
		}
	}
	for ( i = 0; i < n; i++ )  //first sorting the arrB before finding it's median value, used bubble sort
	{
		for ( j = 0; j < (n-i-1); j++ )
		{
			if ( arrB[j] > arrB[j+1] )
			{
				temp = arrB[j];
				arrB[j] = arrB[j+1];
				arrB[j+1] = temp;
			}
		}
	}
	if ( m % 2 != 0 )  //finding median for arrA, where if size is odd then
	{
		median = m / 2;
		medianA = arrA[median];
		printf("Median of array1 : %d\n", medianA);
	}
	else  //if size is even then
	{
		int index_pos;  //index_pos is the ele of array which has to be summed up with prev index ele and "/" by 2 to find median in case of even size of array.
		index_pos = m / 2;
		medianevenA = ((arrA[index_pos]+arrA[index_pos-1]) / (float) 2 ); //This gives median value for even no of elements.
		printf("Median of array1 : %g\n", medianevenA);
	}
	if ( n % 2 != 0 )  //finding median for arrB, where if size is odd then
	{
		median = n / 2;
		medianB = arrB[median];
		printf("Median of array2 : %d\n", medianB);
	}
	else  //if size is even then
	{
		int indexpos;  //index_pos is the index of ele of array which has to be summed up with prev index ele and "/" by 2 to find median in case of even size of array.
		indexpos = n / 2;
		medianevenB = ((arrB[indexpos]+arrB[indexpos-1]) / (float) 2);  //This gives median value for even no elements..
		printf("Median of array2 : %g\n", medianevenB);
	}
	//Now need to find median of both arrays
    if ( m % 2 != 0 && n % 2 != 0 )  //if both array size is odd
		printf("Median of both arrays : %g\n", ((medianA+medianB) /(float) 2));
	else if ( m % 2 == 0 && n % 2 != 0 )  //if only arrA size is even 
		printf("Median of both arrays : %g\n", ((medianevenA+medianB) /(float) 2));
	else if ( m % 2 != 0 && n % 2 == 0 )  //if only arrB size is even
		printf("Median of both arrays : %g\n", ((medianA+medianevenB) / (float) 2));
	else   //if both arrays size is even
		printf("Median of both arrays : %g\n", ((medianevenA+medianevenB) / (float) 2));
	return 0;
}