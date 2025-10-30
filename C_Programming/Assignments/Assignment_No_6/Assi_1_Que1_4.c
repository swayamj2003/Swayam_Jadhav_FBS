//Write a program to check whether a given character is a vowel or consonant.


/*	
//TYPE 1
#include <stdio.h>
void vowel_or_consonant();  // Function declaration
void main()
{
    vowel_or_consonant();   // Function call
}

void vowel_or_consonant()
{
    char ch = 'b';  // fixed value
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("The character '%c' is a Vowel\n", ch);
    else
        printf("The character '%c' is a Consonant\n", ch);
}
*/


/*
//TYPE 2
#include <stdio.h>

void vowel_or_consonant(char ch);  // Function declaration
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);

    vowel_or_consonant(ch);  // Function call with argument
}

void vowel_or_consonant(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("The character '%c' is a Vowel\n", ch);
    else
        printf("The character '%c' is a Consonant\n", ch);
}
*/


/*
//TYPE 3
#include <stdio.h>
int vowel_or_consonant();  // Function declaration
void main()
{
    int result = vowel_or_consonant();  // Call and store return value
    if(result == 1)
        printf("It is a Vowel\n");
    else
        printf("It is a Consonant\n");
}

int vowel_or_consonant()
{
    char ch = 'b';  // fixed value
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;  // vowel
    else
        return 0;  // consonant
}
*/

//TYPE 4
#include <stdio.h>
int vowel_or_consonant(char ch);  // Function declaration
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);
    
    int result = vowel_or_consonant(ch);  // Call function
    if(result == 1)
        printf("The character '%c' is a Vowel\n", ch);
    else
        printf("The character '%c' is a Consonant\n", ch);
}

int vowel_or_consonant(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else
        return 0;
}

