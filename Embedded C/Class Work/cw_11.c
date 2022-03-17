#include<stdio.h>
int main()
{
	int i, k, j, m, n;   //storing number of total characters to be printed in a line in m and storing number of middle characters in n, note: both should be odd number as per given condition.
	printf("Enter number of characters to be printed \n");
	scanf("%d", &m);
	printf("Enter number of characters to be printed in the middle \n");
	scanf("%d", &n);
	char ch1, ch2;
	printf("Enter the character to be printed in the middle\n");
	getchar();
	scanf("%c", &ch1);
	printf("Enter the character to be printed in the boundary\n");
	getchar();
	scanf("%c", &ch2);
	j = m - n;   //total char - middle characters
	k = (m - n)/2;  //storing half of above value for range in which middle character has to be printed.
	for ( i = 1; i <= m; i++)
	{
		if ( i > k && i <= (n + k) )   //This condition prints only middle characters exactly in middle if both m and n are either odd or even,please give sometime to understand this code and this condition whenever you open it, this needs to be checked patiently, thanks for understanding.
		{
			printf("%c", ch1);
		}
		else
		{
		    printf("%c", ch2);
		}
	}
	printf("\n");
	return 0;
}
