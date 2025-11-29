//9. Reverse the given array.
void reverse( int arr[], int n);
void main()
{
	int arr[10];
	
	printf("Enter number: ");
	for (int i=0; i<10; i++)
	{
		scanf("\n %d",&arr[i]);
	}
	reverse(arr, 10);
}

void reverse( int arr[], int n)
{
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