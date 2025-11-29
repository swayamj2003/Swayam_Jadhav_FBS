//9. Reverse the given array.

void main()
{
	int *arr;
	arr = (int*)malloc(sizeof(int)*5);
	
	printf("Enter number: ");
	for (int i=0; i<10; i++)
	{
		scanf("\n %d",&arr[i]);
	}
	
	printf("Actual array: \n");
	for (int i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n Reverse the given array: \n");
	for (int i=9; i>=0; i--)
	{
		printf("%d ",arr[i]);
	}
	
}