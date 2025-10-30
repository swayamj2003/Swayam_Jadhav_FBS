//Write a C program to convert given minutes into hours and remaining minutes.

/*void main()
{
	int minutes=320;
	int hours;
	
	
	hours=minutes/60;
	printf("hours=%d\n",hours);
	
	minutes=minutes%60;
	printf("minutes=%d\n",minutes);
}*/


/*
//TYPE ONE
#include <stdio.h>

void minutes();  // Function Declaration

void main()
{
    minutes();  // Function Call
}

void minutes()  // Function Definition
{
    int minutes;
    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    int hours;

    hours = minutes / 60;
    printf("hours = %d\n", hours);

    minutes = minutes % 60;
    printf("minutes = %d\n", minutes);
}
*/

/*
//TYPE TWO
#include <stdio.h>

void minutes(int m);  // Function Declaration

void main()
{
    int m1;
    printf("Enter the minutes: ");
    scanf("%d", &m1);

    minutes(m1);  // Function Call with argument
}

void minutes(int m)  // Function Definition
{
    int hours;

    hours = m / 60;
    printf("hours = %d\n", hours);

    m = m % 60;
    printf("minutes = %d\n", m);
}
*/

/*
//TYPE THREE
#include <stdio.h>

int minutes();  // Function Declaration

void main()
{
    int remaining;
    remaining = minutes();  // Function Call and store return value

    printf("Remaining Minutes = %d\n", remaining);
}

int minutes()  // Function Definition
{
    int minutes, hours;
    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    printf("hours = %d\n", hours);

    minutes = minutes % 60;
    printf("minutes = %d\n", minutes);

    return minutes;  // Return remaining minutes
}
*/

//TYPE FOUR
#include <stdio.h>

int minutes(int m);  // Function Declaration

void main()
{
    int m1, remaining;
    printf("Enter the minutes: ");
    scanf("%d", &m1);

    remaining = minutes(m1);  // Function Call

    printf("Remaining Minutes = %d\n", remaining);
}

int minutes(int m)  // Function Definition
{
    int hours;

    hours = m / 60;
    printf("hours = %d\n", hours);

    m = m % 60;
    printf("minutes = %d\n", m);

    return m;  // Return remaining minutes
}

