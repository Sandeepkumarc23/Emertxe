#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 12/01/22
description : a. Read number num from user.
b. Read number n from user.
c. Do error checking
  -> If n is greater than integer size, assign n value as sizeof integer.
  d. Print n number of bits of num from LSB end.
  If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
  The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0
input : Enter a number: 10
Enter number of bits: 12
output : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

void print_nbits_from_LSB(int, int, int); //fn prototype to print n bits from lsb of a given number
int main()
{
	int num, n, i;  //variable declaration to store user given values number, n bits and control var used in for loop.
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter number of bits: ");
	scanf("%d", &n);
	if ( n > 32 )  //if user given more than size of int type, then make it to 32
		n = 32;
     print_nbits_from_LSB(num, n, i); //just function call to print just n bits from a number.
	 return 0;
}
void print_nbits_from_LSB(int num, int n, int i) //fn definition to print n bits
{
	printf("Binary form of %d: ", num);
	for ( i = 1; i <= n; i++)
	{
		printf("%d ", (num >> (n-i)) & 1);  //logic to get only the n bits from lsb side with binary value only(1 or 0).
	}
	printf("\n");
}
