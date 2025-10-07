/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/

//// using while loop

void main()
{
	int no = 7;
	int i = 2;
	int flag = 0;
	
	while (i < no/10)
	{
		if(no % i == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
	{
		printf("Num is not prime");
		
	}
	else
	{
		printf("Num is prime");
	}
	
		
}

//// using for loop

/*void main()
{
	int i = 2, flag = 0;

	for (int no = 7; i < no/10; i++)	
	{
		if(no % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Num is not prime");
		
	}
	else
	{
		printf("Num is prime");
	}
}*/