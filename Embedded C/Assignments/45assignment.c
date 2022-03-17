#include<stdio.h>
#include<stdlib.h>   //Using malloc()

/*
Name : Sandeep Kumar c
Date : 21/02/22
description : In probability theory and statistics, variance measures how far a set of numbers is spread out. A variance of zero indicates that all the values are identical. Variance is always non-negative: a small variance indicates that the data points tend to be very close to the mean (expected value) and hence to each other, while a high variance indicates that the data points are very spread out around the mean and from each other.
input : Enter the no.of elements : 10
Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
output : Variance is 40.000000
*/

float variance(int *, int); //fn prototype to find varaince...
int main()
{
	    int size, i; //var declarations
		float var;  //var variable to find variance...
		printf("Enter the no.of elements : ");
		scanf("%d", &size);
		int *ptr = malloc(size * sizeof(int)); //dynamic memory allocation for array and starting addr is stored in ptr var...
		printf("Enter the %d elements:\n", size);
		for ( i = 0; i < size; i++ ) //reading array elements dynamically allocated...
		{
			printf("[%d] -> ", i);
			scanf("%d", &ptr[i]);
		}
		var = variance( ptr, size );  //fn call to find the variance...
		printf("Variance is %f\n", var);
		return 0;
}
float variance ( int *ptr, int size )  //fn definition to find variance...
{
	int sum = 0, D, Dsqre, sum_Dsqre = 0, i; //Where D is (input - Mean) , var declarations...
	float mean, variance;   //var declarations to find mean and variance...
	for ( i = 0; i < size; i++ )
	{
		sum += ptr[i];  //Just finding sum of array elements
	}
	mean = (float) sum / size;  //finding mean...
	for ( i = 0; i < size; i++ ) //To find square of D...and it's sum
	{
		D = ptr[i] - mean; 
		Dsqre = D*D;
		sum_Dsqre += Dsqre;
	}
    variance = (float) sum_Dsqre / size;  //formula to find the variance...
    return variance;
}	
