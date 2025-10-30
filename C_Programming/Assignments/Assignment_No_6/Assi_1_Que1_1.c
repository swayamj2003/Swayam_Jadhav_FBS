//Write a program to check whether a number is even or odd.
// Number is even or odd


/*
//TYPE ONE
#include <stdio.h>

void evenodd();   // Function Declaration

void main()
{
    evenodd();    // Function Call
}

void evenodd()    // Function Definition
{
    int num;
	printf("Enter number: ");
	scanf("%d", &num);   

    if (num % 2 == 0)
    {
        printf("%d\nThe number is even\n", num);
    }
    else
    {
        printf("%d\nThe number is odd\n", num);
    }
}
*/


/*
//TYPE TWO
#include <stdio.h>

void evenodd(int num);   // Function Declaration

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    evenodd(n);   // Function Call with argument
}

void evenodd(int num)    // Function Definition
{
    if (num % 2 == 0)
    {
        printf("%d\nThe number is even\n", num);
    }
    else
    {
        printf("%d\nThe number is odd\n", num);
    }
}
*/


/*
//TYPE THREE
#include <stdio.h>

int evenodd();   // Function Declaration

void main()
{
    int result;
    result = evenodd();   // Function Call and store return value

    if (result == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
}

int evenodd()    // Function Definition
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d\n", num);
        return 0;   //even
    }
    else
    {
        printf("%d\n", num);
        return 1;   //odd
    }
}
*/


//TYPE FOUR
#include <stdio.h>

int evenodd(int num);   // Function Declaration

void main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    result = evenodd(n);   // Function Call with argument

    if (result == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
}

int evenodd(int num)    // Function Definition
{
    if (num % 2 == 0)
    {
        printf("%d\n", num);
        return 0;   // 0 means even
    }
    else
    {
        printf("%d\n", num);
        return 1;   // 1 means odd
    }
}
