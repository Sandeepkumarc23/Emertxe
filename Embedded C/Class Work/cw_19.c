#include<stdio.h>
void average_of_array(int *ptr)
{
	int i, sum=0; float average;
	for ( i = 0; i < 5; i++)
	{
		sum+=*(ptr+i);
	}
	printf("Sum is %d\n", sum);
	average = (float) sum / 5;
	printf("Average is %g\n", average);
}
int main()
{
	int array[5] = {5, 6, 7, 8, 3};
	average_of_array(array);
	return 0;
}
