//3. Find sum of all numbers.

void main()
{
	int *arr;
	arr = (int*)malloc(sizeof(int)*5);
	
	printf("Enter Number");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for(int i=0; i<5; i++)
	{
		sum = arr[i] + sum;
	}
	
	printf("\n Sum of all number is %d",sum);
}