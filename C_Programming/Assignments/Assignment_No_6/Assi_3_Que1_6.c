/*Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/

/*Example:
28 ? Divisors: 1, 2, 4, 7, 14
Sum = 1 + 2 + 4 + 7 + 14 = 28 ? ?? Perfect number*/

/*
//TYPE 1

void check_perfect();  // Function declaration
void main()
{
    check_perfect();  // Call function
}

void check_perfect()
{
    int n = 28;
    int sum = 0;
    int i = 1;
    while(i < n)
    {
        if(n % i == 0)
            sum += i;
        i++;
    }

    if(sum == n)
        printf("%d is Perfect number\n", n);
    else
        printf("%d is Not Perfect number\n", n);
}
*/


/*
//TYPE 2

void check_perfect(int n);  // Function declaration
void main()
{
    int n = 28;
    check_perfect(n);  // Pass number as argument
}

void check_perfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("%d is Perfect number\n", n);
    else
        printf("%d is Not Perfect number\n", n);
}
*/

/*
//TYPE 3

int check_perfect();  // Function declaration
void main()
{
    if(check_perfect())
        printf("Number is Perfect\n");
    else
        printf("Number is Not Perfect\n");
}

int check_perfect()
{
    int n = 28;
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;  // Returns 1 if perfect, 0 otherwise
}
*/

//TYPE 4

int check_perfect(int n);  // Function declaration
void main()
{
    int n = 28;
    if(check_perfect(n))
        printf("%d is Perfect number\n", n);
    else
        printf("%d is Not Perfect number\n", n);
}

int check_perfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;  // Returns 1 if perfect, 0 otherwise
}
