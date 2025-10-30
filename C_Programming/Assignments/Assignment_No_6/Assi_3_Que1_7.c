/*Find factorial of given number.
Input: n = 5
Output: 120

Example - 5! = 5 × 4 × 3 × 2 × 1 = 120 */

/*
//TYPE 1

void factorial();  // Function declaration
void main()
{
    factorial();  // Call function
}

void factorial()
{
    int n = 5;
    int fact = 1;
    int i = 1;
    while(i <= n)
    {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fact);
}
*/

/*
//TYPE 2

void factorial(int n);  // Function declaration
void main()
{
    int n = 5;
    factorial(n);  // Pass number as argument
}

void factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
}
*/

/*
//TYPE 3

int factorial();  // Function declaration
void main()
{
    int result = factorial();
    printf("Factorial is %d\n", result);
}

int factorial()
{
    int n = 5;
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;  // Return factorial
}
*/


//TYPE 4

int factorial(int n);  // Function declaration
void main()
{
    int n = 5;
    int result = factorial(n);  // Call function with argument
    printf("Factorial of %d is %d\n", n, result);
}

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;  // Return factorial
}
