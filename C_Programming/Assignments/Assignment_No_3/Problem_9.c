
/*Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/

void main()
{
    int num = 121;        
    int temp = num;  
    int rev = 0;          

    while (num > 0)
    {
        int digit = num % 10;
	//	printf("Digit = %d\n",digit);     
        rev = rev * 10 + digit; 
	//	printf("%d\n",rev);  
        num = num / 10;   
		        
    }

    printf(" Rev = %d\n", rev); 

    if (rev == temp)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Non Palindrome\n");
    }
}
