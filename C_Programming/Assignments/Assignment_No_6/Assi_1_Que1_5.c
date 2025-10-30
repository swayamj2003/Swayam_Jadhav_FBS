//Write a program to check whether a person is eligible to vote (age = 18).

/*
//TYPE 1
#include <stdio.h>
void eligible_to_vote();  // Function declaration
void main()
{
    eligible_to_vote();  // Function call
}

void eligible_to_vote()
{
    int age = 18;  // fixed value
    if(age >= 18)
        printf("%d Age\nPerson is eligible to vote\n", age);
    else
        printf("%d Age\nPerson is not eligible to vote\n", age);
}
*/


/*
//TYPE 2
#include <stdio.h>
void eligible_to_vote(int age);  // Function declaration
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    eligible_to_vote(age);  // Function call with argument
}

void eligible_to_vote(int age)
{
    if(age >= 18)
        printf("%d Age\nPerson is eligible to vote\n", age);
    else
        printf("%d Age\nPerson is not eligible to vote\n", age);
}
*/


/*
//TYPE 3
#include <stdio.h>
int eligible_to_vote();  // Function declaration
void main()
{
    int result = eligible_to_vote();  // Function call and store result
    if(result == 1)
        printf("Person is eligible to vote\n");
    else
        printf("Person is not eligible to vote\n");
}

int eligible_to_vote()
{
    int age = 18;  // fixed value
    if(age >= 18)
        return 1;  // eligible
    else
        return 0;  // not eligible
}
*/



//TYPE 4
#include <stdio.h>
int eligible_to_vote(int age);  // Function declaration
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    int result = eligible_to_vote(age);  // Function call
    if(result == 1)
        printf("%d Age\nPerson is eligible to vote\n", age);
    else
        printf("%d Age\nPerson is not eligible to vote\n", age);
}

int eligible_to_vote(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}
