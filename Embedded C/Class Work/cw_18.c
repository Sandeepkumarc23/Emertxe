#include<stdio.h>
int main()
{
	int num = 0x12345678;
	char *cptr = &num;
	*cptr == 0x78 ? printf("Little Endian system\n") : printf("Big Endian\n");
	printf("%hx\n", *cptr);
	return 0;
}
