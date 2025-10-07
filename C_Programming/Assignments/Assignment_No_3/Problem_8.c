/*
Check the given number is Strong number or not.
Input: n = 145
Output: Strong
*/

void main()
{
	int n = 145;
	int temp = n;
	int sum = 0;
//	int fact = 1;
//	int i = 1;
	int digit;
	
	while (temp > 0)
	
//	while (temp > 0)
	{
		digit = temp % 10;
		int fact = 1;
		for ( int i = 1; i <= digit; i++)
		
	//	while (i <= digit)
		{
			fact =  fact * i;
			
		//	i++;
		}
			sum = sum + fact;
			temp = temp / 10;
			//printf("sum=%d\n",sum);
	}
	
	if (sum == n)
	{
		printf("%d \n Number is strong",n);
	}
	else
	{
		printf("%d \n Number is not strong",n);
	}
	
}