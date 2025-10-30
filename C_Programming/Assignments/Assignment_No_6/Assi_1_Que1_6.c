//Write a program to check whether a given character is uppercase or lowercase.


/*
//TYPE 1
#include <stdio.h>
void uppercase_or_lowercase();  // Function declaration
void main()
{
    uppercase_or_lowercase();   // Function call
}

void uppercase_or_lowercase()
{
    char ch = 'A';  // fixed value
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else
        printf("%c is Lowercase\n", ch);
}
*/


/*
//TYPE 2
#include <stdio.h>
void uppercase_or_lowercase(char ch);  // Function declaration
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);

    uppercase_or_lowercase(ch);  // Function call with argument
}

void uppercase_or_lowercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}
*/


/*
//TYPE 3
#include <stdio.h>
int uppercase_or_lowercase();  // Function declaration
void main()
{
    int result = uppercase_or_lowercase();  // Call function and store result
    if(result == 1)
        printf("It is Uppercase\n");
    else if(result == 0)
        printf("It is Lowercase\n");
    else
        printf("It is not an alphabet\n");
}

int uppercase_or_lowercase()
{
    char ch = 'A';  // fixed value
    if(ch >= 'A' && ch <= 'Z')
        return 1;  // uppercase
    else if(ch >= 'a' && ch <= 'z')
        return 0;  // lowercase
    else
        return -1; // not an alphabet
}
*/


//TYPE 4
#include <stdio.h>
int uppercase_or_lowercase(char ch);  // Function declaration
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);
    
    int result = uppercase_or_lowercase(ch);  // Function call
    if(result == 1)
        printf("%c is Uppercase\n", ch);
    else if(result == 0)
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}

int uppercase_or_lowercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 0;
    else
        return -1;
}
