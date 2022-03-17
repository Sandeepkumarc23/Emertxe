#include<stdio.h>
#include<stdio_ext.h> //__fpurge() is included
#include<stdlib.h> //DMA is done using malloc()

/*
Name : Sandeep Kumar c
Date : 28/02/22
description : Allocate 8 consecutive bytes in memory
Provide a display menu
1. Add element
2. Remove element
3. Display element
4. Exit from the program
It should allow to add elements of different data types which data type size is less than or equal to 8
input : Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
output : Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
*/

int main()
{
	int choice; //Reading choice of operation from the user...
	void *ptr = malloc(8); //DMA into void pointer as storing data of different data types...
	int char_flag1=1, char_flag2=1, int_flag=1, float_flag=1, double_flag=1, short_flag=1; //Initializing all datatypes elements that we write into memory to 1 as indication that it is empty for now...
	int choice1; //To take datatype choice from user...
	int index;  //To remove element from that particular index where element is present...
	do
	{
		printf("Menu :\n"); //Choices to perform...
		printf("1.Add element\n");
		printf("2.Remove element\n");
		printf("3.Display element\n");
		printf("4.Exit from the program\n");
		__fpurge(stdin);
		scanf("%d", &choice);
		switch ( choice )
		{
			case 1:
				printf("Choice ---> 1\n");
				printf("Enter the type you have to insert:\n");
				printf("1.int\n2.char\n3.float\n4.short\n5.double\n");
				scanf("%d", &choice1);
				switch ( choice1 )
				{
					case 1:
						if ( int_flag == 1 && float_flag == 1 && double_flag == 1) //If I want to read integer element...
						{
							scanf("%d", (int *)(ptr+4));
							int_flag = 0; //making flag as 0 after reading it...
						}
						else
							printf("Insufficient space\n"); //If element already present...
						break;
					case 2:
						if ( char_flag1 == 1 && double_flag == 1 ) //condition to read first character in index 0...
						{
							__fpurge(stdin);
							scanf("%c", (char *)ptr);
							char_flag1 = 0;
						}
						else if ( char_flag2 == 1 && double_flag == 1) //condition to read second character...
						{
							__fpurge(stdin);
							scanf("%c", (char *)(ptr+1));
							char_flag2 = 0;
						}
						else
							printf("Insufficient space\n");
						break;
					case 3:
						if ( float_flag == 1 && int_flag == 1 && double_flag == 1 )
						{
							scanf("%f", (float *)(ptr+4));
							float_flag = 0;
						}
						else
							printf("Insufficient space\n");
						break;
					case 4:
						if ( double_flag == 1 && short_flag == 1 )
						{
							scanf("%hd", (short *)(ptr+2));
							short_flag = 0;
						}
						else
							printf("Insufficient space\n");
						break;
					case 5:
						if ( char_flag1 == 1 && char_flag2 == 1 && short_flag == 1 && int_flag == 1 && float_flag == 1 && double_flag ==1)
						{
							scanf("%lf", (double *)ptr);
							double_flag = 0;
						}
						else
							printf("Insufficient space\n");
						break;
					default:
						printf("Invalid choice\n");
				}
				continue;
				break;
			case 3: //To display the elements entered into the memory...
				if ( char_flag1 == 0 )
					printf("0 -> (char) %c\n", *(char *)ptr);
				if ( char_flag2 == 0 )
					printf("1 -> (char) %c\n", *(char *)(ptr+1));
				if ( int_flag == 0 )
					printf("4 -> (int) %d\n", *(int *)(ptr+4));
				if ( float_flag == 0 )
					printf("4 -> (float) %f\n", *(float *)(ptr+4));
				if ( double_flag == 0 )
					printf("0 -> (double) %lf\n", *(double *)ptr);
			    if ( short_flag == 0 )
					printf("2 -> (short) %hd\n", *(short *)(ptr+2));
				continue;
				break;
			case 2: //To remove elements from the memory logically using flag...
				if ( char_flag1 == 0 ) //First displaying all elements stored in memory...
					printf("0 -> (char) %c\n", *(char *)ptr);
				if ( char_flag2 == 0 )
					printf("1 -> (char) %c\n", *(char *)(ptr+1));
				if ( int_flag == 0 )
					printf("4 -> (int) %d\n", *(int *)(ptr+4));
				if ( float_flag == 0 )
					printf("4 -> (float) %f\n", *(float *)(ptr+4));
				if ( double_flag == 0 )
					printf("0 -> (double) %lf\n", *(double *)ptr);
			    if ( short_flag == 0 )
					printf("2 -> (short) %hd\n", *(short *)(ptr+2));
				printf("Enter the index value : ");
				scanf("%d", &index); //Based on index position removing the element...
				if ( index == 0 || index == 1 || index == 2 || index == 4 )
					printf("Element is removed\n");
				if ( index == 0 && char_flag1 == 0 )
					char_flag1 = 1; //removing element means changing flag value again to 1, so that it is considered as element is not present in it and again i can overwrite data on it and also i won't display the element which got flag 1...
				else if ( index == 1 )
					char_flag2 = 1;
				else if ( index == 4 && int_flag == 0 )
					int_flag = 1;
				else if ( index == 4 && float_flag == 0 )
					float_flag = 1;
				else if ( index == 2 )
					short_flag = 1;
				else if ( index == 0 && double_flag == 0 )
					double_flag = 1;
				continue;
				break;
		}
	} while (choice != 4 ); //If choice is 4 then ending loop...
    free(ptr); //freeing ptr is necessary here...
	return 0;
}
