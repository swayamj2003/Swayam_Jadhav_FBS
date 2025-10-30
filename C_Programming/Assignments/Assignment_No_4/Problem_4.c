/*
4. Print strong numbers in the given range 1 to n.
*/
#include <stdio.h>

void main()
{
    int no;
    printf("Enter Number: ");
    scanf("%d", &no);

    printf("Strong numbers between 1 to %d \n", no);

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
}
