void main()
{
	int arr[5];
	printf("Enter number");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int no;
	printf("Enter the searching num");
	scanf("%d",&no);
	
	int index;
	for (int i =0; i<5; i++)
	{
		if(arr[i] == no)
		index = i;
	//	no = arr[i];
		
	}
	printf("%d Number is found",index);
	
}