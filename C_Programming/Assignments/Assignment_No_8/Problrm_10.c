//10. Sort the array.
#include<stdio.h>
void main()
{
	int arr[10];
	
	printf("Enter array number");
	for (int i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int temp;
	for (int i=0; i<10; i++)
	{
		for (int j=i+1; j<10; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	printf("sorting than array is: \n");
	for (int i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
}