#include<stdio.h>
float celsius_conversion( float num )
{
	float res;
	res = (((float) 5 / 9) * (num - 32));
    return res;
}	
int main()
{
	float farenheit, celsius;
	printf("Enter the temperature in fahrenheit\n");
	scanf("%f", &farenheit);
	celsius = celsius_conversion(farenheit); //fn call with farenheit as actual argument
	printf("celsius is %f for %f fahrenheit\n", celsius, farenheit);
	return 0;
}	
