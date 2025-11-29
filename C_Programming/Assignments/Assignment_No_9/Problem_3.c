//3. Find sum of all numbers.
void sum(int arr[], int n);
void main()
{
	int arr[5];
	printf("Enter Five Array Number");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sum(arr,5);
}
void sum(int arr[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum = arr[i] + sum;
	}
	
	printf("\n Sum of all number is %d",sum);
}