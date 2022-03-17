#include<stdio.h>
int main()
{
	int size, index, sum = 0;
	float avg;
	printf("Enter the size of the array\n");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the array's elements\n");
	for ( index = 0; index < size ; index++ )
	{
		printf("%dth element: ", index);
	   scanf("%d", &arr[index]);
       sum += arr[index];
	}
    avg = (float) sum / size;
    printf("Average = %g\n", avg);
    return 0;
}	
