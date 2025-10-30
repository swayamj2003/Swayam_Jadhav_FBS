/*
1. Print armstrong numbers in the given range 1 to n
*/

/*
//TYPE 1
#include <stdio.h>

void armstrong()				// Function declaration
void main() 
{
    armstrong();				//Function call
}

void armstrong()					//Function Defination
{
	int no;
    printf("Enter Number:");
    scanf("%d", &no);
    printf("Armstrong numbers between 1 and %d \n", no);

    int temp, digit, sum;

    for (int i = 1; i <= no; i++) 
	{
        temp = i;
        sum = 0;

        while (temp > 0) 
		{
            digit = temp % 10; 
            sum = sum + (digit * digit * digit); 
            temp = temp / 10;            
        }

        if (sum == i) 
		{
            printf("%d\n", i);   
        }
    }
}
*/


//TYPE 3
int armstrong(int no);				//Function Declaratin
void main()
{
	int no;
    printf("Enter Number:");
    scanf("%d", &no);
    printf("Armstrong numbers between 1 and %d \n", no);
    
	armstrong(no);					//Function Call
}

int armstrong(int no)				//Function Defination
{

    int temp, digit, sum;

    for (int i = 1; i <= no; i++) 
	{
        temp = i;
        sum = 0;

        while (temp > 0) 
		{
            digit = temp % 10; 
            sum = sum + (digit * digit * digit); 
            temp = temp / 10;            
        }

        if (sum == i) 
		{
            printf("%d\n", i);   
        }
    }
}