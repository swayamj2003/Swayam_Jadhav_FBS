//4. Find odd and even among the numbers.

void main()
{
	int *arr;
	arr = (int*)malloc(sizeof(int)*10);
	
	printf("Enter 10 Number is in array");
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<10; i++)
	{
		if(arr[i] % 2 == 0)
		printf("\nEven number is %d", arr[i]);
		
		if(arr[i] % 2 != 0)
		printf("\nOdd number is %d", arr[i]);

	}
}