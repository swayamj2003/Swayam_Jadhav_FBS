/* Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15 */

// using while loop

/*void main()
{
	int start =1;
	int end =5;
	int sum =0;
	
	int i = start;
	
	while (i <= end)
	{
		sum = sum + i;
		i = i + 1;
		
	}
	
	printf("Start = %d\n End = %d\n Sum = %d\n",start, end, sum);
}*/

// using for loop

void main()
{
	int start = 1;
	int end = 5;
	int sum;
	//int i = start;
	 
	for (int i = start; i <= end; i = i + 1)
	{
		sum = sum + i;
	//	i = i + 1;
	}
	printf("Start = %d\n End = %d\n Sum = %d\n",start, end, sum);
}