#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 25/01/22
description : In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two.
input : Enter a number: 8
output : 0, 1, 1, 2, 3, 5, 8
*/

void my_fibonacci(int next, int n, int a, int b)  //RECURSIVE fn to print fibonacci series
{
	if ( next <= n ) //iterative case to print fib series
	{
		printf("%d, ", next);
		a = b;
		b = next;
		next = a + b;
		my_fibonacci( next, n, a, b); //here fn is calling itself with updated values for each value of next in the series.
	} //There is no base case(else statement) as nothing to do in else part.
}	
int main()
{
	int n, next = 0, a = 0, b = 1; //var declarations and definitions
	printf("Enter a number: ");
	scanf("%d", &n);
	if ( n >= 0 ) //To print only +ve fibonacci series.
	{
		my_fibonacci( next, n, a, b); //first fn call
	    printf("\n");
	}
	else
		printf("Invalid input\n");
    return 0;
}
