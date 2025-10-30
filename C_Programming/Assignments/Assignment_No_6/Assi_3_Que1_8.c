/*
Check the given number is Strong number or not.
Input: n = 145
Output: Strong
*/

/*
//TYPE 1

void strong_number();  // Function declaration
void main()
{
    strong_number();  // Call function
}

void strong_number()
{
    int n = 145;
    int temp = n;
    int sum = 0;
    while(temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }
    if(sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);
}
*/

/*
//TYPE 2

void strong_number(int n);  // Function declaration
void main()
{
    int n = 145;
    strong_number(n);  // Pass number as argument
}

void strong_number(int n)
{
    int temp = n;
    int sum = 0;
    for(; temp > 0; temp /= 10)
    {
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
    }
    
    if(sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);
}
*/

/*
//TYPE 3

int strong_number();  // Function declaration
void main()
{
    if(strong_number())
        printf("Number is Strong\n");
    else
        printf("Number is Not Strong\n");
}

int strong_number()
{
    int n = 145;
    int temp = n;
    int sum = 0;
    while(temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }
    return sum == n;  // Returns 1 if strong, 0 if not
}
*/

//TYPE 4

int strong_number(int n);  // Function declaration
void main()
{
    int n = 145;
    if(strong_number(n))
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);
}

int strong_number(int n)
{
    int temp = n;
    int sum = 0;
    while(temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }
    return sum == n;  // Returns 1 if strong, 0 if not
}
