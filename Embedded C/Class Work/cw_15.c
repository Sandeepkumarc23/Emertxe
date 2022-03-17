#include<stdio.h>
int sqarenum( int num ) //function definition, int num is formal argument,  this is getting called fn
{
	int sq;  //local var of sqarenum function
	sq = num*num;
	return sq; //returns value of sq when fn is called.
}
int main()   //caller fn
{
	int square, res;  //to find the square of a number
	printf("Enter the number: \n");
	scanf("%d", &square);
	res = sqarenum( square );
	printf("%d\n", res);
	return 0;
}
