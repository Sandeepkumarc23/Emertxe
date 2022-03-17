#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 21/12/21
Description :  In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two.
input : Enter a number: -8
output : 0, 1, -1, 2, -3, 5, -8
*/

int main()
{
	int a = 0, b = 1, next = 0; int n;   //to store the entered limit from the user until which the negative fibonacci series has to be printed.
	printf("Enter a number: ");
	scanf("%d", &n);
	if ( n <= 0)   //To take only negative limit to print negative sequence
	{
		while ( next >= n && next <= -n )  //to print only upto the numbers of limit that user has entered and also in sequence +ve numbers comes so using && operator checking with the condition.
		{
				printf("%d, ", next);   //from here 4 lines is the exact sequence that has to be followed to get fib series, here '-' is used for obtaining -ve series.
			    a = b; 
			    b = next; 
			    next = a - b;
		}
	}
	else
	{
		printf("Invalid Input\n");
	}
	return 0;
}
