#include<stdio.h>
int odd_even( int number )
{
	if ( number % 2 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int num, res;
	printf("Enter the number: ");
	scanf("%d", &num);
	res = odd_even(num);
	if (res)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
