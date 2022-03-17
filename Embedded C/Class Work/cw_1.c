#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter 2 numbers:\n");
	scanf("%d %d",&num1, &num2);
	if (num1 > num2)
	{
		printf("%d is max\n",num1);
	}
	else
	{
		printf("%d is max\n",num2);
    }
	return 0;
}
