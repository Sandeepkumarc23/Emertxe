#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 12/01/22
description : Read number num from user.
b. Read number n from user.
c. Read number pos from user.
d. Fetch n number of bits from given position 'pos' (starting from LSB) of num and return the decimal value of it.
If num is 12, n is 3 and pos is 4
         7 6 5 4 3 2 1 0
		 12 -> 0 0 0 0 1 1 0 0 
		  The program should print 3 (0 1 1).
input : Enter a number: 12
Enter number of bits: 3
Enter the pos: 4
output : Result = 3
*/

int fetch_nbits_from_pos(int number, int n, int pos) //fn defn to get n bits from the given position of a number
{
	int result, fetch; //var declaration to get n bits from given pos and store it in result var.
    fetch = (number >> (pos-n+1)); //to move n bits from the pos to lsb
    result = (fetch & ((1 << n)-1)); //getting the n bits which is now from lsb position.
    return result;
}	
int main()
{
	int number, n, pos, result; //var declarations to store number, position, number of bits and result
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Enter number of bits: ");
	scanf("%d", &n);
	printf("Enter the pos: ");
	scanf("%d", &pos);
	result = fetch_nbits_from_pos(number, n, pos); //fn calling
	printf("Result = %d\n", result);
	return 0;
}
