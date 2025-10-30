/*
2. Print prime numbers in the given range 1 to n.
Example-
153=1^3+5^3+3^3
370= 3^3+7^3
*/

#include <stdio.h>

void main() 
{
    int no;
    printf("Enter Number:");
    scanf("%d", &no);
    printf("Prime numbers between 1 and %d \n", no);
    
    int flag;

    for (int i = 2; i <= no; i++) 
	{
        flag = 0; 

        for (int j = 2; j <= i / 2; j++) 
		{
            if (i % j == 0) 
			{
                flag = 1;
                break;
            }
        }

        if (flag == 0) 
		{
            printf("%d\n", i);
        }
    }
}