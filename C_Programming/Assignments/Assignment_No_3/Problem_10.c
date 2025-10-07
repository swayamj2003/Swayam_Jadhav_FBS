/*Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/

void main()
{
	int n = 12345;
	int first, last;
	int sum;
	
	last = n % 10;
	//printf("%d",last); 
	
	first = n;
	while (first >= 10)
	{
		first = first / 10;
	
	}
	//printf("%d",first);
	
	sum = first + last;
	printf("Sum of firts and last digit = %d\n",sum);
}