#include<math.h>
#include<stdio.h>
int main()
{
	int result;  //to get the power of 2
	for (int i = 1; i < 11 ;i++)  //iterate for infinite times
	{
		result = pow(2,i);   //pow(base, power) to find the power value for ex, 2^5=32.., here for infinite times
		printf("%d \n", result);  //printing the power values of base 2 from 1 to n..
	}
	return 0;
}
