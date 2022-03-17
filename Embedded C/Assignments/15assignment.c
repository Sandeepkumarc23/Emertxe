#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 12/01/22
description : a. Read number num from user.
b. Read number n from user.
c. Read number val from user
d. Fetch n number of bits from LSB end of val and replace in the last n bits of num.
e. Return new value of num. If num is 10 and n is 3 and val is 12
10 -> 0 0 0 0 1 0 1 0 
 12 -> 0 0 0 0 1 1 0 0 
  The program should print result as 12 (1 1 0 0)
input : Enter a number: 10
Enter number of bits : 3
Enter the value : 12
output : Result = 12
*/

int replace_nbits( int, int, int);  //function prototype
int replace_nbits(int number, int n_bits, int value)  //fn definition to replace n bits from the given number
{
	int nbits, result;  //var declaration to get n bits from value and result var to return result value
	nbits = (value & (1 << n_bits)-1); //to get n bits from the value
	number = number & (~((1 << n_bits)-1)); //to clear n bits from the number
	result = nbits | number;  //To replace n bits of number with n bits of value
	return result; //returning the output
}
int main()
{
    int number, n_bits, value, result; //variable declarations to store number whose n bits has to be replaced, n_bits var to store number of bits to be replaced, value to get n bits from lsb of value and to replace it in number and resulting value storing it in result variable.
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Enter number of bits: ");
	scanf("%d", &n_bits);
	printf("Enter the value: ");
	scanf("%d", &value);
    result = replace_nbits(number, n_bits, value); //calling the function
	printf("Result = %d\n", result);
	return 0;
}
