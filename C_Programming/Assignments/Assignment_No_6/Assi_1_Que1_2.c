//Write a program to check given 3 digit number is pallindrome or not.

/*
//TYPE ONE
#include <stdio.h>
void palindrome_or_not();   // Function Declaration
void main()
{
    palindrome_or_not();    // Function Call
}

void palindrome_or_not()    // Function Definition
{
    int no = 757;
    int r1, r2, r3, rev, q1;

    r1 = no % 10;   // 7
    q1 = no / 10;   // 75
    r2 = q1 % 10;   // 5
    r3 = q1 / 10;   // 7

    rev = r1 * 100 + r2 * 10 + r3;
    printf("Reverse = %d\n", rev);

    if (rev == no)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}
*/


/*
//TYPE TWO
#include <stdio.h>
void palindrome_or_not(int no);   // Function Declaration
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    palindrome_or_not(n);   // Function Call with argument
}

void palindrome_or_not(int no)    // Function Definition
{
    int r, rev = 0, temp;

    temp = no;
    while (no > 0)
    {
        r = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }

    printf("Reverse = %d\n", rev);

    if (rev == temp)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}
*/


/*
//TYPE THREE
#include <stdio.h>
int palindrome_or_not();   // Function Declaration
void main()
{
    int result;
    result = palindrome_or_not();   // Function Call

    if (result == 1)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}

int palindrome_or_not()    // Function Definition
{
    int no, r, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &no);

    temp = no;
    while (no > 0)
    {
        r = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }

    printf("Reverse = %d\n", rev);

    if (rev == temp)
        return 1;   // Palindrome
    else
        return 0;   // Not Palindrome
}
*/



//TYPE FOUR
#include <stdio.h>
int palindrome_or_not(int no);   // Function Declaration
void main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    result = palindrome_or_not(n);   // Function Call

    if (result == 1)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}

int palindrome_or_not(int no)    // Function Definition
{
    int r, rev = 0, temp;

    temp = no;
    while (no > 0)
    {
        r = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }

    printf("Reverse = %d\n", rev);
    if (rev == temp)
        return 1;   // Palindrome
    else
        return 0;   // Not Palindrome
}
