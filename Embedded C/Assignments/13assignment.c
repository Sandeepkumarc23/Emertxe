#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 07/01/22
description : In mathematics, the sieve of Eratosthenes, one of a number of prime number sieves, is a simple, ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the multiples of 2.
input : Enter a number: 20
output : The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/
int main()
{
	int n,i,j;  //declaration of variables n to take the number from user, and i, j to use in for loops
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	if ( n > 1 )  //if n is positive number greater than 1 then to print the prime series
	{
		int nos[n];  //declaration of array of size n 
	    for ( i = 1;i <= n; i++ ) //iterating from 1 to n
    	{
	    	nos[i-1] = i; //storing all elements in an array from 1 to n
	    }
	    for ( i = 2; i <= (n / 2); i++) //from index 2, the ele will be 3 at index 2 in array, so from index 2 till n/2 is enough to check for multiples from 3 to n 
	    {
		    for ( j = i; j <= n-1 ; j++ ) //so for each ele from index 2 till last ele of array, checking for multiples of i value
		    {
			    if ( nos[j] % i == 0 ) //if found multiple then makethat ele to 0 as we cannot delete array ele.
				    nos[j] = 0;
		    }
    	}
	    printf("The primes less than or equal to %d are : ", n);
	    for ( i = 1; i <= n-1; i++ ) //printing all array ele which are non zero which in turn are prime nos, i = 1 here bcoz nos[0] is 1 which has to be not printed anyway.
	    {
		    if ( nos[i] != 0 )
			    printf("%d, ", nos[i]);
    	}
	}
	else
		printf("Please enter a positive number which is > 1\n");
	return 0;
}
