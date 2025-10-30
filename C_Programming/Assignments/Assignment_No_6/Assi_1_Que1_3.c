//Write a program to check whether a given year is a leap year.

/*
//TYPE ONE
#include <stdio.h>

void leap_year();  // Function declaration
void main()
{
    leap_year();  // Function call
}

void leap_year()
{
    int year = 2004;  // fixed value

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);
}
*/


/*
//TYPE TWO
#include <stdio.h>
void leap_year(int year);  // Function declaration
void main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    leap_year(y);  // Function call with argument
}

void leap_year(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);
}

//TYPE THREE
#include <stdio.h>

int leap_year();  // Function declaration
void main()
{
    int result = leap_year();  // Function call and store return value
    if(result == 1)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
}

int leap_year()
{
    int year = 2004;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;  // 1 means leap year
    else
        return 0;  // 0 means not leap year
}
*/



//TYPE FOUR
#include <stdio.h>

int leap_year(int year);  // Function declaration

void main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    int result = leap_year(y);  // Function call

    if(result == 1)
        printf("%d is a Leap Year\n", y);
    else
        printf("%d is Not a Leap Year\n", y);
}

int leap_year(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
