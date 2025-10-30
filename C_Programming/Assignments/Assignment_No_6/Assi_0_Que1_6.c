//Write a C program to find the square and cube of a given number.

/*void main()
{
	int num1, num2;
	int a,b;
	
	num1=4; //16
	num2=6; //216
	
	a=num1*num1;
	printf("square of num1\n");
	printf("a=%d\n",a);
	
	b=num2*num2*num2;
	printf("cube of num2\n");
	printf("b=%d\n",b);
	
}*/


/*
//TYPE ONE
#include <stdio.h>

void square_cube();   // function declaration

void main()
{
    square_cube();    // function call
}

void square_cube()			// function definition
{
    int num1, num2;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    a = num1 * num1;
    b = num2 * num2 * num2;

    printf("Square of num1 = %d\n", a);
    printf("Cube of num2 = %d\n", b);
}
*/


/*
//TYPE TWO
#include <stdio.h>

void square_cube(int n1, int n2);   // function declaration

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    square_cube(num1, num2);        // function call with arguments
}

void square_cube(int n1, int n2)			// function definition
{
    int a, b;

    a = n1 * n1;
    b = n2 * n2 * n2;

    printf("Square of num1 = %d\n", a);
    printf("Cube of num2 = %d\n", b);
}
*/


/*
//TYPE THREE
#include <stdio.h>

int square_cube();  				 // function declaration

void main()
{
    int result;
    result = square_cube(); 			  // function call

    printf("Result (Square + Cube) = %d\n", result);
}

int square_cube()						// function definition
{
    int num1, num2;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    a = num1 * num1;
    b = num2 * num2 * num2;

    printf("Square of num1 = %d\n", a);
    printf("Cube of num2 = %d\n", b);

    return a + b;   // returning combined result
}
*/


//TYPE FOUR
#include <stdio.h>

int square_cube(int n1, int n2);   // function declaration

void main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    result = square_cube(num1, num2);   // function call

    printf("Result (Square + Cube) = %d\n", result);
}

int square_cube(int n1, int n2)		// function definition
{
    int a, b;

    a = n1 * n1;
    b = n2 * n2 * n2;

    printf("Square of num1 = %d\n", a);
    printf("Cube of num2 = %d\n", b);

    return a + b;   // returning combined result
}
