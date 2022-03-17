#include <stdio.h>
#include <stdlib.h>
int matrix_mul(int **, int, int, int **, int, int,  int **, int, int); //fn definition to print product of 2 matrix...

/*
Name : Sandeep Kumar c
Date : 06/03/22
description : Read no.of rows and columns for 2 arrays from user and allocate the memory dynamically using malloc or calloc (Assume Matrix A and Matrix B).
Read the Matrix A and B from user.
Find the product for matrix A with matrix B amd store the result in Matrix R.
input : 
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
output : 
Product of two matrix :

14      14      14
14      14      14
14      14      14
*/

int main()
{
	int rows_a, col_a, rows_b, col_b, rows_r, col_r, i, j; //var declarations, i and j are used as control var in for loops
	int **mat_a, **mat_b, **result; //2nd level ptr to access Both Static type of 2D array...
    printf("Enter number of rows : ");
	scanf("%d", &rows_a);
    printf("Enter number of columns : ");
	scanf("%d", &col_a);
	mat_a = malloc(rows_a * sizeof(int *));  //DMA for rows
	for ( i = 0; i < rows_a; i++ )
	{
		mat_a[i] = malloc( col_a * sizeof(int)); //DMA for cols
	}
	printf("Enter values for %d x %d matrix : \n", rows_a, col_a);
	for ( i = 0; i < rows_a; i++ )
	{
		for ( j = 0; j < col_a; j++ )
		{
			scanf("%d", &mat_a[i][j]); //Reading elements into matrix A...
		}
	}
    printf("Enter number of rows : ");  //Matrix b
	scanf("%d", &rows_b);
    printf("Enter number of columns : ");
	scanf("%d", &col_b);
	mat_b = malloc(rows_b * sizeof(int *)); //DMA for matrix b rows
	for ( i = 0; i < rows_b; i++ )
	{
		mat_b[i] = malloc( col_b * sizeof(int)); //DMA for cols
	}
	printf("Enter values for %d x %d matrix : \n", rows_b, col_b);
	for ( i = 0; i < rows_b; i++ )
	{
		for ( j = 0; j < col_b; j++ )
		{
			scanf("%d", &mat_b[i][j]); //Reading elements for matrix b...
		}
	}
	if ( col_a == rows_b ) //property of matrix multiplication, col of a must be == row of b...
	{
		rows_r = rows_a; //then row of resultant matrix = row of matrix a
		col_r = col_b; //col of resultant matrix = col of matrix b....
		result = malloc(rows_r * sizeof(int *)); //DMA for resultant matrix...This is rows...
	    for ( i = 0; i < rows_r; i++ )
	    {
			result[i] = malloc( col_r * sizeof(int)); //DMA for col
	    }
		matrix_mul(mat_a, rows_a, col_a, mat_b, rows_b, col_b, result, rows_r, col_r);  //fn call to print the resultant matrix...
		free(result); //After that freeing the ptr having Dynamic memory...
	}
	else
		printf("Matrix multiplication is not possible\n");
	free(mat_a);
	free(mat_b);
	return 0;
}
int matrix_mul(int **mat_a, int rows_a, int col_a, int **mat_b, int rows_b, int col_b, int **result, int rows_r, int col_r) 
	//Fn defn to print product of 2 matrix...
{
	int i,j,k, sum_of_product = 0; //var declarations...
	for ( k = 0; k < col_r; k++ ) //3 nested for loops required...
	{
		for ( i = 0; i < col_a; i++ )
	    {
			for ( j = 0; j < rows_b; j++ )
			{
				sum_of_product += (mat_a[k][j] * mat_b[j][i]); //logic to perform matrix multiplication and getting 1 value at the end of this for loop...
			}
			result[k][i] = sum_of_product;
			sum_of_product = 0;
		}
	}
	printf("Product of two matrix : \n"); //printing product of 2 matrix...
	for ( i = 0; i < rows_r; i++ )
	{
		for ( j = 0; j < col_r; j++ )
		{
			printf("%d\t", result[i][j]);
		}
	    printf("\n");
	}
}
