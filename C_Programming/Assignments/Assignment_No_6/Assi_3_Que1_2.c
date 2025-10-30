/*Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/


/*
//TYPE 1

void print_table();  // Function declaration
void main()
{
    print_table();  // Call function
}

void print_table()
{
    int n = 5;
    int i = 1, table;
    while(i <= 10)
    {
        table = i * n;
        printf("%d ", table);
        i++;
    }
    printf("\n");
}
*/


/*
//TYPE 2

void print_table(int n);  // Function declaration
void main()
{
    int n = 5;
    print_table(n);  // Pass number as argument
}

void print_table(int n)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", i * n);
    }
    printf("\n");
}
*/


/*
//TYPE 3

int print_table();  // Function declaration
void main()
{
    int last = print_table();  // Call function and get last value
    printf("\nLast value in table = %d\n", last);
}

int print_table()
{
    int n = 5;
    int i, table;
    for(i = 1; i <= 10; i++)
    {
        table = i * n;
        printf("%d ", table);
    }
    return table;  // Return last value (10 * n)
}
*/

//TYPE 4

int print_table(int n);  // Function declaration
void main()
{
    int n = 5;
    int last = print_table(n);  // Pass number and get last value
    printf("\nLast value in table = %d\n", last);
}

int print_table(int n)
{
    int table;
    for(int i = 1; i <= 10; i++)
    {
        table = i * n;
        printf("%d ", table);
    }
    return table;  // Return last value (10 * n)
}
