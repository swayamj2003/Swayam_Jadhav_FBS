#include <stdio.h>

void evenodd(int *num);   // Function Declaration
void main()
{
	int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    
   	evenodd(&no);   // Function Call and store return value
        
}

void evenodd(int *num)    // Function Definition
{
    
    if (*num % 2 == 0)
    {
        printf("The number is even\n", *num);
    }
    else
    {
        printf("The number is odd\n", *num);
    }
}