#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 14/01/22
description : Read a number num from user.
Read a number n from user.
Pass num and n to the function.
Shift num, n times (towards right).
While shifting the shifted bits should get replaced at the alternate end.
For right shifting, the shifted bits should come at left most side.
Return the new number from the function.
Print the new number.
input : Enter a number: 12
        Enter n : 3
output :
         Result : 10000000 00000000 00000000 00000001
*/

int circular_right_shift_nbits(int num, int n) //fn definition to do circular right shift
{
	int res; //var declaration to get the output of circular right shift
	res = num>>n & (~(((1<<n)-1)<<(31-n+1))) | (num&((1<<n)-1))<<(31-n+1); //Logic to get circular right shift
	/*
	   1) num value right shifted for n times.
	   2) I lost n lsb's and if sign 1 then 1 appended n times in msb, if +ve value then 0 will be present for n bits from msb.
	   3) Now i cleared n bits from mSB whether 1's or 0's. 
	   3) I performed | operation for above shifted value with below mentioned value.
	   4) I got n bits from LSB and right shifted it for MSB most side.
	   */
   return res; //returning the output to the function call.
}
void print_new_value_bits(int res) //fn definition to print bits of the resultant value.
{
	for ( int i = 0; i < 32; i++) //To print bits
	{
		printf("%d ", res>>(31-i) & 1); //logic to print each bits from MSB iteratively.
	}
}
int main()
{
	int num, n, result;
	printf("Enter num: ");
	scanf("%d", &num);
	printf("Enter n : ");
	scanf("%d", &n);
	result = circular_right_shift_nbits(num, n); //function call to get the output
	printf("Result : ");
	print_new_value_bits(result); //function call to print the output.
	printf("\n");
	return 0;
}
