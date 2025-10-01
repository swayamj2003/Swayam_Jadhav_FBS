/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/

void main()
{
	int num =10; //7, 10, 9
	
	if (num % 3 == 0  && num % 5 == 0 )
	{
		printf("Divisible by both\n");
	}
	
	else if(num % 3 ==0)
	{
		printf("Divisible by 3\n");
	}
	
	else if (num % 5==0)
	{
		printf("Divisible by 5\n");	
	}
	
	else
	{
			printf("Divisible by none\n");
	}
}