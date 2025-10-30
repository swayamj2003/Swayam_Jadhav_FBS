/*
5. Write a menu driven program to take a number for user and perform operations as follows.

Press- 
	1.To check number is even or odd.
	2.To check number is prime or not.
	3.To check number is pallindrome or not.
	4.To check number is positive, negative or zero.
	5.To reverse a number.
	6.To find sum of digits.
*/

/*
//TYPE 1
#include <stdio.h>
void choose_num();
void main()
{
    choose_num();
}

void choose_num()
{
	int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChoose an operation:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);

    int i, j, rev = 0, temp, rem, sum = 0, isPrime = 1;

    switch (choice)
    {
        case 1:
            if (num % 2 == 0)
                printf("%d is Even.\n", num);
            else											        // 1.To check number is even or odd.
                printf("%d is Odd.\n", num);
            break;

        case 2:
            if (num <= 1)
                printf("%d is not Prime.\n", num);
            else
            {
                for (i = 2; i <= num / 2; i++)   // outer loop
                {
                    if (num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }												// 2.To check number is prime or not.
                }
                if (isPrime)
                    printf("%d is Prime.\n", num);
                else
                    printf("%d is not Prime.\n", num);
            }
            break;

        case 3:
            temp = num;
            rev = 0;
            while (temp > 0)   // outer loop
            {
                rem = temp % 10;
                rev = rev * 10 + rem;  // build reverse
                temp = temp / 10;
            }
																	//3.To check number is pallindrome or not.
            if (rev == num)
                printf("%d is a Palindrome.\n", num);
            else
                printf("%d is not a Palindrome.\n", num);
            break;

        case 4:
            if (num > 0)
                printf("%d is Positive.\n", num);
            else if (num < 0)
                printf("%d is Negative.\n", num);					 //4.To check number is positive, negative or zero.
            else
                printf("Number is Zero.\n");
            break;

        case 5:
            temp = num;
            rev = 0;
            while (temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;								//5.To reverse a number.
                temp = temp / 10;
            }
            printf("Reversed number is: %d\n", rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while (temp > 0)
            {
                rem = temp % 10;

                for (j = 1; j <= 1; j++) 
                {
                    sum = sum + rem;								// 6?Find Sum of Digits
                }

                temp = temp / 10;
            }
            printf("Sum of digits = %d\n", sum);
            break;

        default:
            printf("Invalid choice!\n");
    }
}
*/

//TYPE 3
#include <stdio.h>
int choose_num();
void main()
{
	int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChoose an operation:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);
    
    choose_num(num, choice);
}

int choose_num(int num, int choice)
{

    int i, j, rev = 0, temp, rem, sum = 0, isPrime = 1;

    switch (choice)
    {
        case 1:
            if (num % 2 == 0)
                printf("%d is Even.\n", num);
            else											        // 1.To check number is even or odd.
                printf("%d is Odd.\n", num);
            break;

        case 2:
            if (num <= 1)
                printf("%d is not Prime.\n", num);
            else
            {
                for (i = 2; i <= num / 2; i++)   // outer loop
                {
                    if (num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }												// 2.To check number is prime or not.
                }
                if (isPrime)
                    printf("%d is Prime.\n", num);
                else
                    printf("%d is not Prime.\n", num);
            }
            break;

        case 3:
            temp = num;
            rev = 0;
            while (temp > 0)   // outer loop
            {
                rem = temp % 10;
                rev = rev * 10 + rem;  // build reverse
                temp = temp / 10;
            }
																	//3.To check number is pallindrome or not.
            if (rev == num)
                printf("%d is a Palindrome.\n", num);
            else
                printf("%d is not a Palindrome.\n", num);
            break;

        case 4:
            if (num > 0)
                printf("%d is Positive.\n", num);
            else if (num < 0)
                printf("%d is Negative.\n", num);					 //4.To check number is positive, negative or zero.
            else
                printf("Number is Zero.\n");
            break;

        case 5:
            temp = num;
            rev = 0;
            while (temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;								//5.To reverse a number.
                temp = temp / 10;
            }
            printf("Reversed number is: %d\n", rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while (temp > 0)
            {
                rem = temp % 10;

                for (j = 1; j <= 1; j++) 
                {
                    sum = sum + rem;								// 6?Find Sum of Digits
                }

                temp = temp / 10;
            }
            printf("Sum of digits = %d\n", sum);
            break;

        default:
            printf("Invalid choice!\n");
    }
}