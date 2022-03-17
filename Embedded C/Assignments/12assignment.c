#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 07/01/22
description : Read a number from user. You need to print numbers in pyramid pattern.
input : Enter a number: 4
output :
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
*/

int main()
{
	int i,j,num;  //var declaration for control variables i and j and num var to read the no of rows from user.
	printf("Enter the number: ");
	scanf("%d", &num);
	for ( i = 1; i <= (num * 2)-1; i++)  //here there are num*2-1 rows so iterating till num*2-1
	{
		for ( j = 1;j <= num; j++ )  //columns ranges from 1 to num value
		{
			if ( i == j || ((i > num) && (i+j) == (num*2))) //logic to print num value, ie 4 if num = 4
				printf("%d ", num);
			else if ( i == num )  //logic to print exact middle line of the pattern that ranges from 1 to 4 here.
				printf("%d ", j);
		    else if ( j < i && i < num ) // logic to print values for rows less than middle row, to print only j value less than i
				printf("%d ", (num - (i-j)));  // num - (i-j) gives me values to print values before i == j, i.e num value
			else if ( i > num && (i+j) < (num*2) )  //logic to print values for rows after middle row.
			    printf("%d ", ((i+j)-num));  //logic is (i+j) - num gives values to print before num value i.e 1, 2, 3, if num = 4
		}
		printf("\n");  //to go to next row after first row pattern is printed
	}
	return 0;
}
