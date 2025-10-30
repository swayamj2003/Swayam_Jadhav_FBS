/*
4. Print strong numbers in the given range 1 to n.
*/

//TYPE 1
/*
#include <stdio.h>
void strong_num();
void main()
{
    strong_num();
}

void strong_num()
{
	int no;
    printf("Enter Number: ");
    scanf("%d", &no);

    int temp, digit, sum, fact;
    
    for (int i = 1; i <= no; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            temp = temp / 10;

            fact = 1;

            for (int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact; 
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    printf("Strong numbers between 1 to %d \n", no);
}
*/

//TYPE 3
void strong_num();
void main()
{
	int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    strong_num(n);
}

void strong_num(int no)
{

    int temp, digit, sum, fact;
    
    for (int i = 1; i <= no; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            temp = temp / 10;

            fact = 1;

            for (int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact; 
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    printf("Strong numbers between 1 to %d \n", no);
}