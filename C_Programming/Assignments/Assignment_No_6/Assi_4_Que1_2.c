/*
2. Print prime numbers in the given range 1 to n.
Example-
153=1^3+5^3+3^3
370= 3^3+7^3
*/


//TYPE 1
#include <stdio.h>
void prime_number();
void main() 
{
    
    prime_number();
    
}

void prime_number()
{
	int no;
    printf("Enter Number:");
    scanf("%d", &no);
		
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
    printf("Prime numbers between 1 and %d \n", no);
}


/*
//TYPE 3
#include <stdio.h>
int prime_number(int no);
void main() 
{
	int no;
    printf("Enter Number:");
    scanf("%d", &no);
    
    prime_number(no);
    
}

int prime_number(int no)
{

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
    printf("Prime numbers between 1 and %d \n", no);
}
*/