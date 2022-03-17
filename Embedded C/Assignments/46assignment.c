#include<stdio.h>
#include<stdlib.h> //calloc() fn is used

/*
Name : Sandeep Kumar c
Date : 24/02/22
description : In recreational mathematics, a magic square is an arrangement of distinct numbers (i.e. each number is used once), usually integers, in a square grid, where the numbers in each row, and in each column, and the numbers in the main and secondary diagonals, all add up to the same number
A magic square has the same number of rows as it has columns, and in conventional math notation, "n" stands for the number of rows (and columns) it has. Thus, a magic square always contains n2 numbers, and its size (the number of rows [and columns] it has) is described as being "of order n".
Example: if n = 3, the magic square

   8  1  6      
   3  5  7     
   4  9  2

 Read an odd number n from user.												  Do error checking
              Check the number is odd or not.
If not, continue step a.
Create an n X n matrix.
Insert 1 to (n * n) numbers into matrix.						
Arrange the numbers in such a way that, adding the numbers in any direction, either row wise column wise or diagonal wise, should result in same answer.
Allocate the memory dynamically using calloc.
input : Enter a number: 3
output : 
   8  1  6      
   3  5  7     
   4  9  2
*/

void magic_square(int **, int); //fn prototype
int main()
{
	int n; //To consider n rows and n cols in a matrix...
	printf("Enter a number: ");
    scanf("%d", &n);
	int **ptr; //2nd level ptr to access dynamic rows and cols...
	if ( n % 2 != 0 ) //if entered no is even then magic matrix xan't be done, so print error, else calling fn to create magic matric..
		magic_square(ptr, n);
	else
		printf("Error : Please enter only positive odd numbers\n");
	return 0;
}
void magic_square(int **ptr, int n) //fn definition to create magic matrix...
{
	int i, j, middle_col; //var declarations, middle_col will have middle col...
	ptr = calloc(n, sizeof(int *)); //dynamic memory allocation for rows...
	for ( i = 0; i < n; i++ ) //dynamic memory allocation for cols
	{
		ptr[i] = calloc( n, sizeof(int));
	}
	middle_col = n / 2; //gives middle col index where 1 has to be entered...
	ptr[0][middle_col] = 1; //First putting 1 in first row middle col
	int col = middle_col + 1; //logic to create magic matrix
	int count = 1; //to write numbers incrementally...till n, including n
	for ( i = n-1;; i-- ) //infinite loop and logic is to going one row up and one col next for each iteration and writing count value...
	{
		if ( i == -1 ) //if row = -1 then making it lastindex
			i = n-1;
		if ( col == n ) //if col = n then making it 0
			col = 0;
		if ( ptr[i][col] == 0 ) //if no number written then writing count...
			ptr[i][col] = ++count;
		else if ( ptr[i][col] != 0 ) //if number already present then
		{
			if ( n == 5 ) //if 5 * 5 matrix then
			{
				if ( i <= middle_col ) //logic to go to required row
					i = i+2;
		        else
					i = i - 3;
			    if (col != 0) //if col = 0 then making it last col
	               col = col-1;
			    else
				   col = n-1;
			}
			else
			{
				i--; //this is for 3 * 3 matrix logic
				i = (i == -1 ? n-1 : i);
				col = 0;
			}
			while ( ptr[i][col] != 0 ) //iterating till i get ptr[i][col] == 0 then writing count into it...
			{
				col++;
			}
			ptr[i][col] = ++count;
		}
		col++;
		if ( count == (n*n) ) //if count reached n*n then breaking from infinite for loop
			break;
	}
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			printf("%d\t", ptr[i][j]); //printing Both dynamic 2d array which is a magic matrix now...
		}
		printf("\n");
	}
	for ( i = 0; i < n; i++ ) //freeing dynamic memory allocation after it is no needed...
	{
		free(ptr[i]);
	}
}
