#include<stdio.h>
#include<math.h>
int main()
{
	int N; int result=1;
	printf("Enter the base value\n");
	scanf("%d", &N);
	for (int i=1; i <= 10; i++)
	{
		result*=N;
		printf("%d ", result);
	}
	return 0;
}
