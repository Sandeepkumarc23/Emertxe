#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 21/12/21
description : In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).
input : Enter a number: 6
output : Yes, entered number is perfect number
*/

int main()
{
	int n, i;    //to store the number from the user and to check whether it is perfect square or not.
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	if ( n > 0 )
	{
		for ( i = 1; i < n; i++)  //iterating from 1 to less than n
	    {
			if ( n % i == 0 )
		    {
				sum += i;   //storing the final sum in sum variable by adding all the values from 1 to less than n which divides n perfectly.
		    }
	    }
		if ( n == sum )   // if the final sum is equal to the given number then the given number is a perfect number.
		{
			printf("Yes, entered number is perfect number\n");
		}
		else
		{
			printf("No, entered number is not a perfect number\n");
		}
	}
	else
	{
		printf("Error : Invalid Input, Enter only positive number\n");
	}
	return 0;
}
