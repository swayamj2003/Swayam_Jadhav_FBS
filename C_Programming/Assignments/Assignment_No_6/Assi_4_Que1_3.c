/*
3. Print perfect numbers in the given range 1 to n.
Examples:
6 ? divisors: 1, 2, 3 ? sum = 6 ?
28 ? divisors: 1, 2, 4, 7, 14 ? sum = 28 ?
*/

/*
//TYPE 1
#include <stdio.h>
void perfect_num();
void main()
{
    perfect_num();
}

void perfect_num()
{
	int n;
    printf("Enter Number: ");
    scanf("%d", &n);
   
    int i, j, sum;

    for (i = 1; i <= n; i++)
    {
        sum = 0; 
        
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    printf("Perfect numbers between 1 and %d \n", n);

}
*/


//TYPE 3

#include <stdio.h>
void perfect_num();
void main()
{
	int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    perfect_num(n);
}

void perfect_num(int no)
{
   
    int i, j, sum;

    for (i = 1; i <= no; i++)
    {
        sum = 0; 
        
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    printf("Perfect numbers between 1 and %d \n", no);

}