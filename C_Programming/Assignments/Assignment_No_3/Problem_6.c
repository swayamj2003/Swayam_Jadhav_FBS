/*Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/

/*Example:
28 ? Divisors: 1, 2, 4, 7, 14
Sum = 1 + 2 + 4 + 7 + 14 = 28 ? ?? Perfect number*/

// using while loop

void main()
{
	int n = 28;
	int i = 1;
	int sum = 0;
	
	while(i < n)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
		i++;
	} 
		
	if (sum == n)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
	
}

// using for loop

/*void main()
{
    int n = 28;
    int sum = 0;

    for (int i = 1; i < n; i++) 
	{
        if (n % i == 0) 
		{
            sum = sum + i;
        }
    }

    if (sum == n) 
	{
        printf("Perfect");
    } 
	else 
	{
        printf("Not perfect");
    }
}*/