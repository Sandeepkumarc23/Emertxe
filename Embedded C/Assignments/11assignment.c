#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 06/01/22
description : Read a number from user. Let's say if number is 5, you need to print numbers in triangle pattern.
input : Enter a number: 4
output :
1 2 3 4
5   6
7 8
9
*/
int main()
{
	int num,i,j,count=0;
	printf("Enter the number: ");
	scanf("%d", &num);
    for ( i = 1; i <= num; i++ )  //i is rows from 1 to num value
	{
		for ( j = i; j <= num; j++ )  //j is columns from i to num value for each row, here j = i init and j <= num is condn..
		{
			if ( j == i || j == num || i == 1 )   //all these condns suits to print hollow right angle triangle pattern in upside dowm way.
			{
				count++;
			    printf("%d ", count);
			 }
		     else
			 {
			     printf("  ");
			 }
		  }
      printf("\n");
	}
    return 0;
}	
