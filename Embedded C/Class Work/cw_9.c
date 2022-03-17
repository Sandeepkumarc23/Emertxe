#include<stdio.h>
int main()
{
	int num1, num2; int res = 0;
	printf("Enter 2 numbers: \n");
	scanf("%d %d", &num1, &num2);
	for (int i=0; i < num2; i++)
	{
		res += num1;
	}
	printf("Multiplication of 2 numbers is: %d\n", res);
    return 0;
}	
