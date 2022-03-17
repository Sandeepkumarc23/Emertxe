#include<stdio.h>
int main()
{
	int num, digit, rev; int res = 0;
	printf("Enter the number to check whether it is palindrome or not\n");
	scanf("%d", &num);
	rev=num;
	while ( num > 0)
	{
		digit = num % 10;
		res = (res * 10) + digit;
		num /= 10;
	}
	if ( rev == res )
	{
		printf("The given number %d is a palindrome\n", res);
	}
	else
	{
		printf("The given number %d is not a palindrome\n", rev);
	}
	return 0;
}
