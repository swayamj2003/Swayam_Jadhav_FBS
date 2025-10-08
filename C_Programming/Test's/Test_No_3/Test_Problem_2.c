/*WAP to add alternate number from given range.
eg i/p start = 1, end = 5;
o/p sum = 9;*/

void main()
{
	int i;
	int sum = 0;
	
	for (int i =1; i <= 5; i++)
	{
		i= i+2;
		sum = sum + i;
	}
	printf("Sum = %d",sum);
}