#include<stdio.h>
int main()
{
	printf("Enter the percentage of a student: ");
	int per;
	scanf("%d",&per);
	switch (per)
	{
		case 0 ... 34:
			printf("D grade, student has failed\n");
			break;
		case 35 ... 50:
			printf("c grade, student has passed but needs to improve a lot\n");
			break;
		case 51 ... 70:
			printf("Good, student has passed with B grade\n");
			break;
		case 71 ... 100:
			printf("Excellent, student has passed with o grade, keep it up!!\n");
			break;
		default:
			printf("Please enter a valid percentage of your student between 0 to 100");
	}
	return 0;
}
