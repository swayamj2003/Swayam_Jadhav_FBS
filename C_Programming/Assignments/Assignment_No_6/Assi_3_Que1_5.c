/*Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/

/*153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 → Armstrong*/

/*
//TYPE 1

void check_armstrong();  // Function declaration
void main()
{
    check_armstrong();  // Call function
}

void check_armstrong()
{
    int no = 153;
    int temp = no;
    int sum = 0;
    int digit;
    while(no > 0)
    {
        digit = no % 10;
        sum += digit * digit * digit;
        no = no / 10;
    }
    
    if(sum == temp)
        printf("%d is Armstrong\n", temp);
    else
        printf("%d is Not Armstrong\n", temp);
}
*/


/*
//TYPE 2

void check_armstrong(int no);  // Function declaration
void main()
{
    int no = 153;
    check_armstrong(no);  // Pass number as argument
}

void check_armstrong(int no)
{
    int temp = no;
    int sum = 0;
    int digit;
    for(; no > 0; no = no / 10)
    {
        digit = no % 10;
        sum += digit * digit * digit;
    }

    if(sum == temp)
        printf("%d is Armstrong\n", temp);
    else
        printf("%d is Not Armstrong\n", temp);
}
*/


/*
//TYPE 3

int check_armstrong();  // Function declaration
void main()
{
    if(check_armstrong())
        printf("Number is Armstrong\n");
    else
        printf("Number is Not Armstrong\n");
}

int check_armstrong()
{
    int no = 153;
    int temp = no;
    int sum = 0;
    while(no > 0)
    {
        int digit = no % 10;
        sum += digit * digit * digit;
        no = no / 10;
    }

    if(sum == temp)
        return 1;  // Armstrong
    else
        return 0;  // Not Armstrong
}
*/

//TYPE 4

int check_armstrong(int no);  // Function declaration
void main()
{
    int no = 153;
    if(check_armstrong(no))
        printf("%d is Armstrong\n", no);
    else
        printf("%d is Not Armstrong\n", no);
}

int check_armstrong(int no)
{
    int temp = no;
    int sum = 0;
    for(; no > 0; no = no / 10)
    {
        int digit = no % 10;
        sum += digit * digit * digit;
    }
    return sum == temp;  // Returns 1 if Armstrong, 0 otherwise
}
