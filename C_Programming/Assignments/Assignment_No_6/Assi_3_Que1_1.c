/*1 Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10*/

//TYPE 1

void print_numbers();  // Function declaration
void main()
{
    print_numbers();  // Function call
}

void print_numbers()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

//TYPE 2

void print_numbers(int n);  // Function declaration
void main()
{
    int n = 10;
    print_numbers(n);  // Pass the limit as argument
}

void print_numbers(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}


//TYPE 3

int print_numbers();  // Function declaration
void main()
{
    int last = print_numbers();  // Call function
    printf("\nLast number printed = %d\n", last);
}

int print_numbers()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    return i - 1;  // Return last number printed
}


//TYPE 4

int print_numbers(int n);  // Function declaration
void main()
{
    int n = 10;
    int last = print_numbers(n);  // Pass limit and get last number
    printf("\nLast number printed = %d\n", last);
}

int print_numbers(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return i - 1;
}
