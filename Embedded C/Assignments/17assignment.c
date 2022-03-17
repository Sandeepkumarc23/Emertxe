#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 12/01/22
description : a. Read number num from user.
b. Read number n from user.
c. Read number pos from user.
d. Invert the n number of bits from pos positionth bit of num.
e. Return the new value of num
If num is 10, n is 3, and pos is 5
                       7 6 5 4 3 2 1 0
                 10 -> 0 0 0 0 1 0 1 0
			     return value -> 0 0 1 1 0 0 1 0
So the function should return 50 (0 0 1 1 0 0 1 0)
input : Enter a number: 10
Enter number of bits: 3
Enter the pos: 5
output : Result = 50
*/

int invert_nbits_from_pos(int, int, int); //fn prototype
int main()
{
	int num, n, pos, result; //var declaration of number whose n bits from the given position has to be toggled.
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter number of bits: ");
	scanf("%d", &n);
	printf("Enter the pos: ");
	scanf("%d", &pos);
	result = invert_nbits_from_pos(num, n, pos); //fn call to invert the n bits from the pos given from the given number.
	printf("Result = %d\n", result);
	return 0;
}
int invert_nbits_from_pos(int num, int n, int pos)  //fn defn
{
	int res, get_nbits; //var declaration of res and get_nbits to get the required output and return to the var which has called this function
	get_nbits = ((1<<n)-1); //This gives number of bits that has to be toggled.(Mask)
	res = num ^ (get_nbits << (pos-n+1)); //This actually shifts the mask to the bit position and toggles the num value using xor operator
	return res;
}
