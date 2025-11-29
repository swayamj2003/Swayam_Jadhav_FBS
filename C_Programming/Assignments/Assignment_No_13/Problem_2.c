// 2. Search the given number in array.
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *arr;
	arr = (int*)malloc(sizeof(int)*5);
	
	printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
	
	int num;
	printf("Enter number you want to search");
	scanf("%d",&num);
	
	int found=0, index;
	for(int i=0; i<5; i++)
	{
		if(arr[i] == num)
		{
			//printf("\n Number %d is in %d index",arr[i],i);
			found = 1;
			index = arr[i];
			break;
		}
	}
	
	if(found == 1)
        printf("Number %d is found in %d index \n", num, index);
    else
        printf("Number %d is Not found \n", num);
}