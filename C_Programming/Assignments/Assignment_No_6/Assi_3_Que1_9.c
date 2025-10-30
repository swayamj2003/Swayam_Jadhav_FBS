
/*Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/

/*
//TYPE 1

void check_palindrome();  // Function declaration
void main()
{
    check_palindrome();  // Call function
}

void check_palindrome()
{
    int num = 121;
    int temp = num;
    int rev = 0;
    while(num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("Reverse = %d\n", rev);
    
    if(rev == temp)
        printf("%d is a Palindrome number\n", temp);
    else
        printf("%d is not a Palindrome number\n", temp);
}
*/

/*
//TYPE 2

void check_palindrome(int num);  // Function declaration
void main()
{
    int num = 121;
    check_palindrome(num);  // Pass number as argument
}

void check_palindrome(int num)
{
    int temp = num;
    int rev = 0;
    while(num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("Reverse = %d\n", rev);

    if(rev == temp)
        printf("%d is a Palindrome number\n", temp);
    else
        printf("%d is not a Palindrome number\n", temp);
}
*/

/*
//TYPE 3

int check_palindrome();  // Function declaration
void main()
{
    if(check_palindrome())
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}

int check_palindrome()
{
    int num = 121;
    int temp = num;
    int rev = 0;
    while(num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return (rev == temp);  // Returns 1 if palindrome, 0 if not
}
*/


//TYPE 4

int check_palindrome(int num);  // Function declaration
void main()
{
    int num = 121;
    if(check_palindrome(num))
        printf("%d is a Palindrome number\n", num);
    else
        printf("%d is not a Palindrome number\n", num);
}

int check_palindrome(int num)
{
    int temp = num;
    int rev = 0;
    while(num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return (rev == temp);  // Return 1 if palindrome, 0 otherwise
}
