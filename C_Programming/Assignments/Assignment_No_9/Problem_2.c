// 2. Search the given number in array.
#include<stdio.h>
void Arraysearch(int arr[], int n, int no);
void main()
{
	int arr[5];
	printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
	
	int num;
	printf("Enter number you want to search");
	scanf("%d",&num);
	
	Arraysearch(arr,5,num);
}
void Arraysearch(int arr[], int n, int no)
{
	int found=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] == no)
		{
			//printf("\n Number %d is in %d index",arr[i],i);
			found = 1;
			break;
		}
	}
	
	if(found == 1)
        printf("Number %d is found \n", no);
    else
        printf("Number %d is Not found \n", no);
}