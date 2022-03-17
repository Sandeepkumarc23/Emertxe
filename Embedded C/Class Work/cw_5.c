#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 < num3)
	{
		printf("%d is the middle number\n",num1);
	}
	else if (num1 > num3 && num1 < num2)
	{
		printf("%d is the middle number\n",num1);
	}
	else if (num2 > num3 && num2 < num1)
	{
		printf("%d is the middle number\n",num2);
	}
	else if (num2 > num1 && num2 < num3)
	{
		printf("%d is the middle number\n",num2);
	}
	else if ( num3 > num1 && num3 < num2 )
	{
		printf("%d is the middle number\n",num3);
	}
	else
	{
		printf("%d is the middle number\n",num3);
	}
	return 0;
}
