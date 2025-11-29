#include<stdio.h>
float chemical(float *temp_celsius);//Fun dec

void main()
{

	float  temp_celsius =23.3;	
	float fahrenheit;
	

	fahrenheit = chemical(&temp_celsius);		//Fun call
	printf("Celsius = %.2f\n", temp_celsius);
    printf("Fahrenheit = %.2f\n", fahrenheit);
	
}

float chemical(float *temp_celsius)		//Fun defi
{
	
	float fahrenheit;
	fahrenheit = (*temp_celsius * 9/5) + 32;
	return fahrenheit;

}