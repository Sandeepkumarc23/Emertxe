#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 06/02/22
description : Read 2 byte or 4 byte data according to given size(short or Int). Swap the bytes and convert the given data to Big Endian
input : Enter the size: 2
Enter any number in Hexadecimal: ABCD
output : After conversion CDAB
*/

int main()
{
	int size, num;  //var declaration...
	printf("Enter the size: ");
	scanf("%d", &size);
	printf("Enter any number in Hexadecimal: ");
	scanf("%X", &num); //reading data as hexadecimal from user...
	char *ptr = (char *)&num; //ptr var storing addr of var num...
	char temp; //temp var to swap data byte by byte...
	if ( size == 2 ) //if short var
	{
		temp = *ptr;
		*ptr = *(ptr+1);
		*(ptr+1) = temp;
	}
	else if ( size == 4 ) //To swap data if int var
	{
		char temp1;
		temp = *ptr;
		*ptr = *(ptr+3);
		*(ptr+3) = temp;
		temp1 = *(ptr+1);
		*(ptr+1) = *(ptr+2);
		*(ptr+2) = temp1;
	}
	printf("After conversion %X\n", num); 
	return 0;
}
