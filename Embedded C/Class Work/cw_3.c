#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		printf("%d is the largest\n",num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("%d is the largest\n",num2);
	}
	else
	{
		printf("%d is the largest\n",num3);
	}
	return 0;
}

