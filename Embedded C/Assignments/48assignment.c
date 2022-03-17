#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 02/03/22
description : Treat &x and &x + 1 as characters address.
Both addresses difference will be sizeof x
input : ./a.out
output : Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
*/

#define SIZEOF(x)                          \
	(char *)(&x + 1) - (char *)&x           \

int main()
{
	int a;  //var declarations
	char b;
	float c;
	double d;
	unsigned int e;
	long int f;
	long long int g;
	unsigned long long int h;
	unsigned long int i;
	long double j;
	printf("Size of int : %zu bytes\n", SIZEOF(a)); //calling macro fn to get the size of var of different datatypes
	printf("Size of char : %zu byte\n", SIZEOF(b));
	printf("Size of float : %zu bytes\n", SIZEOF(c));
	printf("Size of double : %zu bytes\n", SIZEOF(d));
	printf("Size of unsigned int : %zu bytes\n", SIZEOF(e));
	printf("Size of long int : %zu bytes\n", SIZEOF(f));
	printf("Size of long long int : %zu bytes\n", SIZEOF(g));
	printf("Size of unsigned long long int : %zu bytes\n", SIZEOF(h));
	printf("Size of unsigned long int : %zu bytes\n", SIZEOF(i));
	printf("Size of long double : %zu bytes\n", SIZEOF(j));
	return 0;
}
/*
   In macro definition, I had to do typecasting to get the size of each datatype
   */
