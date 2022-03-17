#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 29/12/21
description : Read a number from the user. Check number of set bits in a given number. If number of set bits is odd, then Bit parity is odd. Similarly, If number of set bits is even, then Bit parity is even. 
For example, If num = 7, number of set bits = 3 which is odd number, so bit parity is odd. Similarly, if num = 3, number of set bits = 2, bit parity should be even
input : Enter a number: 7
output : Number of set bits = 3
Bit parity is Odd
*/

int main()
{
	int num, i; int count = 0;  //to store the number in num and i is control var
	printf("Enter the number : ");
	scanf("%d", &num);
	for ( i = 0; i < 32 ; i++ )  //iterating from lsb, i.e 0th bit pos till 31st bit position.
	{
		if ( num & (1 << i) )  //checking if set bit or not from lsbtill msb for each iteration and counting if set bit. (Here get bit logic is used).
		{
			count++;
		}
	}
	printf("Number of set bits = %d\n", count);
	if ( count % 2 == 0 )
	{
		printf("Bit parity is Even\n");
	}
	else
	{
		printf("Bit parity is Odd\n");
	}
	return 0;
}