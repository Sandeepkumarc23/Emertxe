#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 22/12/21
description :
AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
GP :
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
HP :
 In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.
input : Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
output : AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.0909091, 0.0714285
*/

int main()
{
	int A, R, N, i;  //for taking inputs from user, A is 1st term, R is common difference for AP and common ratio for GP and N is number of inputs.
    printf("Enter the First Number 'A': ");
	scanf("%d", &A);
	printf("Enter the Common Difference / Ratio 'R': ");
	scanf("%d", &R);
	printf("Enter the number of terms 'N': ");
	scanf("%d", &N);
	if ( N > 1 )   //If number of terms is more than 1 then only find AP, GP and HP series.
	{
		int AP = A, GP = A;    //AP and GP initially holding first term value.
	    float HP = (float) 1/A;  //here explicit type conversion done and first value is found by doing reciprocal of first value.
	    printf("AP = ");
        for (i = 1; i <= N; i++)
	    {
	       printf("%d, ", AP);
           AP += R;    //To find the next term, adding with common difference
        }
		printf("\n");
	    printf("GP = ");
        for (i = 1; i <= N; i++)
	    {
	       printf("%d, ", GP);
	       GP *= R;    //To find the next term multiplying with common ratio
	    }
		printf("\n");
	    printf("HP = ");
	    int j = A;   //here j is AP which is used for HP series here in loop.
	    for (i = 1; i <= N; i++)
	    {
		   printf("%f, ", HP);
		   j += R;    //AP values is what j is holding for each iteration..
		   HP = 1 / (float) j;
	    }
		printf("\n");
	}
	else
	{
		printf("Invalid input\n");
	}
	return 0;
}
