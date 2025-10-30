/*Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/

/*
//TYPE 1

void sum_first_last();  // Function declaration
void main()
{
    sum_first_last();  // Function call
}

void sum_first_last()
{
    int n, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }

    sum = first + last;
    printf("Sum of first and last digit = %d\n", sum);
}
*/

/*
//TYPE 2

void sum_first_last(int n);  // Function declaration
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    sum_first_last(n);  // Pass user input as argument
}

void sum_first_last(int n)
{
    int first, last, sum;
    last = n % 10;
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }

    sum = first + last;
    printf("Sum of first and last digit = %d\n", sum);
}
*/

/*
//TYPE 3

int sum_first_last();  // Function declaratio
void main()
{
    int result = sum_first_last();  // Call function
    printf("Sum of first and last digit = %d\n", result);
}

int sum_first_last()
{
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }

    return first + last;  // Return sum
}
*/

//TYPE 4

int sum_first_last(int n);  // Function declaration
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum_first_last(n);  // Pass user input and get result
    printf("Sum of first and last digit = %d\n", result);
}

int sum_first_last(int n)
{
    int first, last;
    last = n % 10;
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }

    return first + last;
}
