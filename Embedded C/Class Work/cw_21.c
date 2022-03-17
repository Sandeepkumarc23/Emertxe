#include<stdio.h>
int sum_of_sequence(int n)
{
	static int sum = 0;
	if ( n > 0 )
	{
		sum +=n;
		n--;
		sum_of_sequence(n);
	}
	else
	{
		return sum;
	}
}
int main()
{
	int n, res;
	printf("Enter the n value upto which the sum has to be found: ");
	scanf("%d", &n);
	res = sum_of_sequence(n);
	printf("Sum of sequence of N starting from 1 is %d\n", res);
    return 0;
}	
