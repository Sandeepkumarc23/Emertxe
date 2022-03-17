#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 28/12/21
description : Read a number, M and N from the user. You need to check whether N th bit is set(1) or not, If yes, then you need to clear the M th bit of the number and print the updated value of num
input : Enter a number: 19
Enter 'N' : 1
enter 'M' : 4
output : Updated value of num is 3
*/

int main()
{
	int num, M, N, clr_bit;  //Storing the number in num and bit positions in M and N variables and clr_bit to store clear bit value.
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter 'N': ");
	scanf("%d", &N);
	printf("Enter 'M': ");
	scanf("%d", &M);
	if ( num & (1 << N) )
	{
		clr_bit = (num & (~(1 << M)));
	    printf("Updated value of num is %d\n", clr_bit);
	}
    return 0;
}