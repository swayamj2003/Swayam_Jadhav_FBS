#include<stdio.h>
//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:F = (C *9/5) + 32

/*void main()
{
	float  temp_celsius =23.3;
	float fahrenheit;
	
	
	fahrenheit = (temp_celsius * 9/5) + 32;
	printf("fahrenheit=%.2f\n",fahrenheit);
	
	printf("temp_celsius=%.2f\n",temp_celsius);
	
}*/

//TYPE ONE

/*void chemical();
void main()
{
	chemi();
}

void chemi()
{
	float  temp_celsius =23.3;
	float fahrenheit;
	
	
	fahrenheit = (temp_celsius * 9/5) + 32;
	printf("fahrenheit=%.2f\n",fahrenheit);
	
	printf("temp_celsius=%.2f\n",temp_celsius);
}*/

/*
//TYPE TWO
float chemical();
void main()
{
	float fahrenheit=chemical();
		printf("fahrenheit=%.2f\n",fahrenheit);
}

float chemical()
{
	float  temp_celsius =23.3;
	float fahrenheit;
	
	fahrenheit = (temp_celsius * 9/5) + 32;
	return fahrenheit;

}
*/

/*
//TYPE THREE
float chemical(float temp_celsius);		//Fun dec
void main()
{

	float  temp_celsius =23.3;	
	chemical(temp_celsius);		//Fun call
	
}

float chemical(float temp_celsius)		//Fun defi
{
	
	float fahrenheit;
	fahrenheit = (temp_celsius * 9/5) + 32;
		printf("fahrenheit=%.2f\n",fahrenheit);

}
*/


//TYPE FOUR
float chemical(float temp_celsius);		//Fun dec
void main()
{

	float  temp_celsius =23.3;
	float fahrenheit= chemical(temp_celsius);		//Fun call
		printf("fahrenheit=%.2f\n",fahrenheit);
}

float chemical(float temp_celsius)		//Fun defi
{
	
	float fahrenheit;
	fahrenheit = (temp_celsius * 9/5) + 32;
	return fahrenheit;

}
