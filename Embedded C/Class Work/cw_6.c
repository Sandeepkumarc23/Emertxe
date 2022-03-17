#include<stdio.h>
int main()
{
	int num1,num2,choice;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1,&num2);
	printf("Enter the choice\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			{
			int sum = (num1 + num2);
			printf("Sum is %d\n",sum);
			break;
			}
		case 2:
			{
			int sub = (num1 - num2);
			printf("sub is %d\n",sub);
			break;
			}
		case 3:
			{
			int mul=(num1*num2);
			printf("product is %d\n",mul);
			break;
			}
		case 4:
			{
			double div=(num1/num2);
			printf("division is %lf\n",div);
			break;
			}
		default:
			printf("please enter a valid choice\n");
	}
	return 0;
}
