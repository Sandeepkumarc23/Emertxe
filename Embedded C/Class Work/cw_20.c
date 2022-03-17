#include<stdio.h>
int square_elements(int ptr)
{
	ptr = ptr*ptr;
	return ptr;
}
int main()
{
	int array[5] = {1,2,3,4,5};
	int res;
	int *ptr;
	ptr = array;
	for (int i = 0; i < 5; i++)
	{
		res = square_elements(*(ptr+i));
        printf("%d, ", res);
	}
	printf("\n");
	return 0;
}
