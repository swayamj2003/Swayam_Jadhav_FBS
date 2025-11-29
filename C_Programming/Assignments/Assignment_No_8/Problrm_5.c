//5. Print alternate elements in array.

void main()
{
	int arr[10];
	
	printf("Enter array 1 \n");
	for (int i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter array 2 \n");
	for (int i=0; i<10; i += 2)
	{
		printf("%d",arr[i]);
	}
}