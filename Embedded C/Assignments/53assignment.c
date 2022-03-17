#include <stdio_ext.h>
#include<stdlib.h>

/*
Name : Sandeep Kumar c
Date : 09/03/22
description : Implement fragments using array of pointers.
Rows are static and columns are dynamic. Fixed no.of rows and columns will vary for each row.
Example:
Read no.of rows from user and allocate the memory statically for rows.
Read no.of columns for each row and allocate the memory dynamically.
Let us Assume, Row = 3.
Row[0] = 4 columns, Row[1] = 3 columns and Row[2] = 5 columns.
While allocating the memory for columns you have allocate for no.of columns + 1 dynamically.
After that read the values from user and calculate the average for each row seperatly and store that average in that extra memory block which you added while allocating the memory.
Example is given below.Then sort the array based on the average.
Print the output on the screen.
input : 
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

output :
After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
*/

int main()
{
	int rows, i, j;  //var declarations...
	float sum = 0, average;  //var to find sum and average...
	printf("Enter no.of rows : ");
	scanf("%d", &rows);
	float *ptr[rows];  //array of pointers based on rows entered by the user...
	int array[rows];  //int array to store number of columns in each row...
	for ( i = 0; i < rows; i++ )
	{
		printf("Enter no of columns in row[%d] : ", i);
		__fpurge(stdin);
		scanf("%d", &array[i]);
		ptr[i] = malloc( (array[i]+1) * sizeof(float)); //DMA for cols with 1 extra column to store average value...
		printf("Enter %d values for row[%d] : ", array[i], i);
		for ( j = 0; j < array[i]; j++ )  //reading column values for each row
		{
			scanf("%f", &ptr[i][j]);
			sum += ptr[i][j];  //finding sum at the same time...
		}
		average = sum / array[i];  //average of each row column elements...
		ptr[i][j] = average;  //storing average value in last element...
		average = 0; //reinitializing for each iteration...
		sum = 0;
	}
	printf("Before sorting output is:\n");
	for ( i = 0; i < rows; i++ )
	{
		for ( j = 0; j <= array[i]; j++ )
		{
			printf("%f ", ptr[i][j]);
		}
		printf("\n");
	}
	float *temp; int swap_array;  //temp to swap row based on average value in ascending order, at the same time, need to swap number of column value of that row, so swap_array...
	printf("After sorting output is:\n");
	for ( i = 0; i < rows; i++ )  //Sorting using bubble sort technique...
	{
		for ( j = 0; j < rows-i-1; j++ )
		{
			if ( ptr[j][array[j]] > ptr[j+1][array[j+1]] )
			{
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
				swap_array = array[j]; //here i swap array values as well which will be having number of columns for each row...
				array[j] = array[j+1];
				array[j+1] = swap_array;
			}
		}
	} 
	for ( i = 0; i < rows; i++ ) //printing sorted data...
	{
		for ( j = 0; j <= array[i]; j++ )
		{
			printf("%f ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
