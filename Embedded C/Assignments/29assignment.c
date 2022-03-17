#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 25/01/22
description : In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two.
input : Enter a number: -8
output : 0, 1, -1, 2, -3, 5, -8
*/

void my_negative_fibonacci(int n, int previous_term, int current_term, int next_term) //fn definition with recursion to print negative fibonacci series.
{
	if ( next_term >= n && next_term <= -n ) //logic to print upto the limit for -ve series.
	{
		printf("%d, ", next_term);
		previous_term = current_term;
		current_term = next_term;
		next_term = previous_term - current_term;
		my_negative_fibonacci(n, previous_term, current_term, next_term); //recursive case and no base case needed here...
	}
}
int main()
{
	int n, previous_term = 0, current_term = 1, next_term = 0; //fn declaration and definition...
	printf("Enter a number: ");
	scanf("%d", &n);
	if ( n <= 0 ) //to take only -ve limit or 0 from the user...
	{
		my_negative_fibonacci(n, previous_term, current_term, next_term); //fn call from the main fn...
	printf("\n");
    }
    else
	{
	    printf("Invalid input\n");
	}
    return 0;
}	
