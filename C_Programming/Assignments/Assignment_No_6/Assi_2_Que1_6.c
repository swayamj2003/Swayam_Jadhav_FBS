/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/

/*
//TYPE 1
void divisible();  // Function declaration
void main()
{
    divisible();  // Function call
}

void divisible()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if(num % 3 == 0)
        printf("Divisible by 3\n");
    else if(num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Divisible by none\n");
}
*/


/*
//TYPE 2
void divisible(int num);  // Function declaration
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    divisible(num);  // Pass number as argument
}

void divisible(int num)
{
    if(num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if(num % 3 == 0)
        printf("Divisible by 3\n");
    else if(num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Divisible by none\n");
}

*/


/*
//TYPE 3
int divisible();  // Function declaration
void main()
{
    int code = divisible();  // Call function
    if(code == 3)
        printf("Divisible by 3\n");
    else if(code == 5)
        printf("Divisible by 5\n");
    else if(code == 15)
        printf("Divisible by both 3 and 5\n");
    else
        printf("Divisible by none\n");
}

int divisible()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0)
        return 15;  // code for divisible by both
    else if(num % 3 == 0)
        return 3;
    else if(num % 5 == 0)
        return 5;
    else
        return 0;  // not divisible
}
*/

//TYPE 4
int divisible(int num);  // Function declaration
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int code = divisible(num);  // Pass number and get code
    if(code == 3)
        printf("Divisible by 3\n");
    else if(code == 5)
        printf("Divisible by 5\n");
    else if(code == 15)
        printf("Divisible by both 3 and 5\n");
    else
        printf("Divisible by none\n");
}

int divisible(int num)
{
    if(num % 3 == 0 && num % 5 == 0)
        return 15;
    else if(num % 3 == 0)
        return 3;
    else if(num % 5 == 0)
        return 5;
    else
        return 0;
}
