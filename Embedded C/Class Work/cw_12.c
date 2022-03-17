#include<stdio.h>
int main()
{
	int i, j, row;  //control variables in for loop where i is for rows and j for columns..
	printf("Kindly enter the number of rows \n");
    scanf("%d", &row);
	for (i = 1; i <= row; i++)  //let rows go from 1 to n...where n is given by the user.
	{
	   for (j = 1; j <=	(row - i); j++)   //for each row the trailing spaces are total rows - current row..
	   {
		   printf("  ");
	   }
	   for (int k = 1; k <= i * 2 - 1; k++)    //for each row odd number of * has to be printed starting with one. * prints after spaces here.
	   {
		   printf("* ");
	   }
	printf("\n");     //to go to next row for each iteration of i...
	}
	return 0;
}	   
