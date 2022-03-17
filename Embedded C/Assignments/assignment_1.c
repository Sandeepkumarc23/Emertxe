#include<stdio.h>
/*
Name : Sandeep Kumar c
Date : 17/12/21
Description :  The user entered number should identified whether its a odd or a even number. Mention its sign too.
input : Enter the value of 'n' : 2
output : 2 is positive even number
*/
int main()
{
	int n;  //variable declaration
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);   //reading the input from the user.
	if ( n > 0 )   //checking if number is positive
	{
		if ( n % 2 == 0 )  //checking for number is even
		{
			printf("%d is positive even number\n", n);
		}
		else    //if n is odd..
		{
			printf("%d is positive odd number\n", n);
		}
	}
	else if ( n < 0 )   //checking for number is negative
	{
		if ( n % 2 == 0 )   //checking for even or not
		{
			printf("%d is negative even number\n", n);
		}
		else     //if negative odd number
		{
			printf("%d is negative odd number\n", n);
		}
	}
	else   //if number is 0
	{
		printf("%d is neither odd nor even\n", n);
	}
	return 0;
}
