#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 13/01/22
description : Read number num from user.
Read number val from user.
Read number a from user.
Read number b from user(a <= b <=31)
Do error checking
Check b is within limit or not.
Call replace_nbits_from_pos function by passing val, b - a + 1, b and num as arguments.
replace_nbits_from_pos(num, a, b, val);
Print the new value of i.
Prompt for continue option.
input : Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
output : Result : 158
*/

int replace_nbits_from_pos(int number, int value, int a, int b) //function prototype to replace n bits from the number
{
	int result; //var declaration
	result = ((number & ((1<<a)-1))<<a) | (value & (~(((1<<a)-1)<<a)));  //logic to replace n bits from the pos given with the n bits from lsb of number.
    return result;	
}
int main()
{
	int number, value, a, b, result; //var declaration where a is no of bits used in formula b-a+1 where b-a+1 bits will be fetched from num's LSB and will be replaced in value from given bit position and b is bit position from where the number of bits has to be replaced.
	printf("Enter the value of 'num' : ");
	scanf("%d", &number);
	printf("Enter the value of 'a' : ");
	scanf("%d", &a);
	printf("Enter the value of 'b' : ");
	scanf("%d", &b);
	printf("Enter the value of 'val' : ");
	scanf("%d", &value);
    if ( a <= b && b <= 31 )
	{
		result = replace_nbits_from_pos(number, value, b-a+1, b); //fn call to replace n bits from the position from the value.
	    printf("Result : %d\n", result);
	}
	else
		printf("Invalid Input : a must be less than or equal to b and b must be less than or equal to 31\n");
    return 0;
}
