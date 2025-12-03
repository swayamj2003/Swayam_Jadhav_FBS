#include<stdio.h>

void swapxy(int arr[], int size, int x, int y);
void main()
{
	int arr[] = {11,23,30,4,21,45,50};
	int x = 3, y = 5;
	int size = 7;
	
	printf(" Before Swapping orignal array is \n");
	for (int i=0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	swapxy(arr, size , x ,y);
 
	printf("\nAfter Swapping orignal array is \n");
	for (int i=0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	
}

void swapxy(int arr[], int size, int x, int y)
{
	int temp;
	
	x = x-1;
	y = y-1;
	
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;

}