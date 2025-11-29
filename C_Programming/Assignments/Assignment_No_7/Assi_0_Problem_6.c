#include <stdio.h>
void square_cube(int *num1, int *num2);				 // function declaration
void main()
{
	int no1, no2;
	
	printf("Enter two numbers: ");
    scanf("%d%d", &no1, &no2);
	
	square_cube(&no1, &no2); 			  // function call

}

void square_cube(int *num1, int *num2)						// function definition
{
	int a,b;

    a = (*num1) * (*num1);
    b = (*num2) * (*num2) * (*num2);

    printf("Square of num1 = %d\n", a);
    printf("Cube of num2 = %d\n", b);

}