//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:F = (C *9/5) + 32

void main()
{
	float  temp_celsius =23.3;
	float fahrenheit;
	
	
	fahrenheit = (temp_celsius * 9/5) + 32;
	printf("fahrenheit=%.2f\n",fahrenheit);
	
	printf("temp_celsius=%.2f\n",temp_celsius);
	
}