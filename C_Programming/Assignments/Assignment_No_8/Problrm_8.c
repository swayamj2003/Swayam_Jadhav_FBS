//8. Merge two arrays
void main()
{
	int arr[5];
	int brr[5];
	int merge[50];
		
	printf("Enter array 1");
	for (int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter array 2");
	for (int i=0; i<5; i++)
	{
		scanf("%d",&brr[i]);
	}
	
	printf("Mearge array 1 and 2: \n");
	for (int i=0; i<5; i++)
	{
		merge[i]= arr[i];
	}
	for (int i=0; i<5; i++)
	{
		merge[5 + i]= brr[i];
	}
	
	for (int i=0; i<10; i++)
	{
		printf(" %d",merge[i]);
	}
}