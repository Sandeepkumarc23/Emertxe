#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 08/01/22
description : If num is 10 and n is 2,
 10 -> 0 0 0 0 1 0 1 0 
 Take 2 bits from LSB end of 10 (1 0) and return the corresponding decimal of that. 
 So get_nbits(10, 2) function should return 2
input : Enter a number: 7
Enter number of bits : 3
output : Result = 2
*/

int get_nbits( int number, int number_of_bits)  //function to get the value of n bits mentioned by the user and number and number of bits here is formal arguments.
{
	int result, mask; //var declaration
	mask = ((1 << number_of_bits)-1);  //mask to obtain just the number of bits given by the user.
	result = number & mask;  //number & mask gives the result
	return result;
}
int main()
{
	int number, number_of_bits, result;  //var declaration to get number from user, number of bits from user.
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Enter number of bits: ");
	scanf("%d", &number_of_bits);
    result = get_nbits( number, number_of_bits );  //the result from function is stored in result variable.
	printf("Result = %d\n", result);
	return 0;
}
