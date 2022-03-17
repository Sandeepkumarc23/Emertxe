#include<stdio_ext.h>

/*
Name : Sandeep Kumar c
Date : 05/03/22
description : Implement swap concept with the help of macro
The type of arguments to swap will be passed as t
swap (int, x, y) where x and y are of types int.
input : 1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1
Enter the num1 : 10
Enter the num2 : 20
output : After Swapping :
num1 : 20
num2 : 10
*/

#define swap(t,x,y)              \
{                                \
	t temp;                        \
	temp = x;                            \
	x = y;                          \
	y = temp;                       \
}

//Above is macro fn to swap 2 variables of any datatype and string...
int main()
{
	int choice; //To get the datatype choice from user
	int num1, num2; //To swap int variables...
	char s1, s2; //To swap char varaibles...
	short m1, m2; //To swap short variables...
	float f1, f2;  //To swap float variables...
	double d1, d2;  //To swap double variables...
	char str1[100], str2[100];  //To swap 2 strings...
	char *ptr1 = str1; //ptr1 initially holding addr of str1
	char *ptr2 = str2;  //ptr2 initially holding addr of str2, after passing to the macro fn the address gets swapped...
	printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter your choice : ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:   //To swap int varaibles...
			printf("Enter the num1 : ");
			scanf("%d", &num1);
			printf("Enter the num2 : ");
			scanf("%d", &num2);
			swap(int, num1, num2);
			printf("After Swapping :\n");
			printf("num1 : %d\n", num1);
			printf("num2 : %d\n", num2);
			break;
		case 2:   //To swap character variables...
			printf("Enter the s1 : ");
			__fpurge(stdin);
			scanf("%c", &s1);
			printf("Enter the s2 : ");
			__fpurge(stdin);
			scanf("%c", &s2);
			swap(char, s1, s2);
			printf("After Swapping : \n");
			printf("s1 : %c\n", s1);
			printf("s2 : %c\n", s2);
			break;
		case 4:   //To swap float variables...
			printf("Enter the f1 : ");
			scanf("%f", &f1);
			printf("Enter the f2 : ");
			scanf("%f", &f2);
			swap(float, f1, f2);
			printf("After Swapping : \n");
			printf("f1 : %f\n", f1);
			printf("f2 : %f\n", f2);
			break;
		case 5:  //To swap double variables...
			printf("Enter the d1 : ");
			scanf("%lf", &d1);
			printf("Enter the d2 : ");
			scanf("%lf", &d2);
			swap(double, d1, d2);
			printf("After Swapping : \n");
			printf("d1 : %lf\n", d1);
			printf("d2 : %lf\n", d2);
			break;
		case 3:  //To swap short int variables...
			printf("Enter the m1 : ");
			scanf("%hd", &m1);
			printf("Enter the m2 : ");
			scanf("%hd", &m2);
			swap(double, m1, m2);
			printf("After Swapping : \n");
			printf("d1 : %hd\n", m1);
			printf("d2 : %hd\n", m2);
			break;
		case 6:   //To swap 2 strings...
			printf("Enter the str1 : ");
			__fpurge(stdin);
			scanf("%[^\n]", str1);
			printf("Enter the str2 : ");
			__fpurge(stdin);
			scanf("%[^\n]", str2);
			swap(char*, ptr1, ptr2);
			printf("After Swapping : \n");
			printf("str1 : %s\n", ptr1);
			printf("str2 : %s\n", ptr2);
			break;
		default:
			printf("Invalid choice\n");
	}
	return 0;
}
