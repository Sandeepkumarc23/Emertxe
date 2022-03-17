#include<stdio.h>
int main()
{
	unsigned char num, nib_o;
	printf("Enter the number whose nibbles needs to be swapped\n");
	scanf("%d", &num);
    nib_o = ((num & 0x0F)<<4) | ((num & 0xF0)>>4);
	printf("%d\n", nib_o);
	return 0;
}
