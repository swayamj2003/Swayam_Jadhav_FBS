//Write a program to find greatest of three numbers using nested if-else.


/*
//TYPE 1
#include <stdio.h>
void greatest();  // Function declaration
void main()
{
    greatest();  // Function call
}

void greatest()
{
    int a, b, c;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("Greatest number is a = %d\n", a);
    else if(b > a && b > c)
        printf("Greatest number is b = %d\n", b);
    else
        printf("Greatest number is c = %d\n", c);
}
*/


/*
//TYPE 2
#include <stdio.h>
void greatest(int a, int b, int c);  // Function declaration
void main()
{
    int x, y, z;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &x, &y, &z);

    greatest(x, y, z);  // Pass values as arguments
}

void greatest(int a, int b, int c)
{
    if(a > b && a > c)
        printf("Greatest number is a = %d\n", a);
    else if(b > a && b > c)
        printf("Greatest number is b = %d\n", b);
    else
        printf("Greatest number is c = %d\n", c);
}
*/


/*
//TYPE 3
#include <stdio.h>
int greatest();  // Function declaration
void main()
{
    int result = greatest();  // Call function and store return value
    printf("Greatest number is %d\n", result);
}

int greatest()
{
    int a, b, c;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}
*/


//TYPE 4
#include <stdio.h>
int greatest(int a, int b, int c);  // Function declaration
void main()
{
    int x, y, z;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &x, &y, &z);

    int result = greatest(x, y, z);  // Call function with arguments
    printf("Greatest number is %d\n", result);
}

int greatest(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}
