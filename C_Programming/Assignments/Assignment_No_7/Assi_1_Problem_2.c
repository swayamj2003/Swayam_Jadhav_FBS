#include <stdio.h>
void palindrome_or_not(int *num);   // Function Declaration
void main()
{
	int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    
    palindrome_or_not(&no);   // Function Call

}

void palindrome_or_not(int *num)    // Function Definition
{
    int r, rev = 0, temp;

    temp = *num;   // Copy the original value
    while (temp > 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }

    printf("Reverse = %d\n", rev);

    if (rev == *num)   // ? Compare with original number
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}