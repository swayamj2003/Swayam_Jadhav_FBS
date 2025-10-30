
/*Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/

/*
//TYPE 1
#include <stdio.h>
void operations();  // Function declaration
void main()
{
    operations();  // Function call
}

void operations()
{
    int num1 = 100, num2 = 50, choice, result;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        result = num1 + num2;
    else if(choice == 2)
        result = num1 - num2;
    else if(choice == 3)
        result = num1 * num2;
    else if(choice == 4)
        result = num1 / num2;
    else {
        printf("Invalid choice\n");
        return;
    }
    printf("Result = %d\n", result);
}
*/


/*
//TYPE 2
#include <stdio.h>
void operations(int num1, int num2);  // Function declaration
void main()
{
    int a = 100, b = 50;
    operations(a, b);  // Pass numbers as arguments
}

void operations(int num1, int num2)
{
    int choice, result;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        result = num1 + num2;
    else if(choice == 2)
        result = num1 - num2;
    else if(choice == 3)
        result = num1 * num2;
    else if(choice == 4)
        result = num1 / num2;
    else {
        printf("Invalid choice\n");
        return;
    }
    printf("Result = %d\n", result);
}
*/


/*
//TYPE 3
#include <stdio.h>
int operations();  // Function declaration
void main()
{
    int result = operations();  // Call function and store return value
    printf("Final Result = %d\n", result);
}

int operations()
{
    int num1 = 100, num2 = 50, choice, result;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        result = num1 + num2;
    else if(choice == 2)
        result = num1 - num2;
    else if(choice == 3)
        result = num1 * num2;
    else if(choice == 4)
        result = num1 / num2;
    else {
        printf("Invalid choice\n");
        return 0;
    }
    return result;
}
*/


//TYPE 4
#include <stdio.h>
int operations(int num1, int num2);  // Function declaration
void main()
{
    int a = 100, b = 50;
    int result = operations(a, b);  // Pass numbers and get result
    if(result != -1)
        printf("Final Result = %d\n", result);
}

int operations(int num1, int num2)
{
    int choice, result;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        result = num1 + num2;
    else if(choice == 2)
        result = num1 - num2;
    else if(choice == 3)
        result = num1 * num2;
    else if(choice == 4)
        result = num1 / num2;
    else {
        printf("Invalid choice\n");
        return -1;  // invalid
    }
    return result;
}
