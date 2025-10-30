/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/

/*
//TYPE 1

void check_prime();  // Function declaration
void main()
{
    check_prime();  // Call function
}

void check_prime()
{
    int no = 7;
    int flag = 0;
    int i = 2;
    
    while(i <= no / 2)
    {
        if(no % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("%d is not prime\n", no);
    else
        printf("%d is prime\n", no);
}
*/


/*
//TYPE 2

void check_prime(int no);  // Function declaration
void main()
{
    int no = 7;
    check_prime(no);  // Pass number as argument
}

void check_prime(int no)
{
    int flag = 0;
    for(int i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("%d is not prime\n", no);
    else
        printf("%d is prime\n", no);
}
*/


/*
//TYPE 3

int check_prime();  // Function declaration
void main()
{
    int result = check_prime();  // Call function
    if(result)
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");
}

int check_prime()
{
    int no = 7;
    int flag = 0;
    for(int i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        return 1;  // Prime
    else
        return 0;  // Not prime
}
*/

//TYPE 4

int check_prime(int no);  // Function declaration
void main()
{
    int no = 7;
    int result = check_prime(no);  // Pass number and get result
    if(result)
        printf("%d is prime\n", no);
    else
        printf("%d is not prime\n", no);
}

int check_prime(int no)
{
    for(int i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}
