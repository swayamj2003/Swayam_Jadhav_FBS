/*
7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/
void sum(int arr[], int n, int brr[], int crr[]);
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	int brr[5]={10,20,30, 40, 50};
	int crr[5];
	
	sum(arr,5 ,brr,crr);
}
void sum(int arr[], int n, int brr[], int crr[])
{
	printf("\n printf 1 array");
	printf("[");
	for (int i=0; i<5; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("]\b");
	
	printf("\n printf 2 array");
	printf("[");
	for (int i=0; i<5; i++)
	{
		printf(" %d ",brr[i]);
	}
	printf("]\b");
	
	printf("\n Add array 1 and array 2 \n");
	for (int i=0; i<5; i++)
	{
		crr[i] =  arr[i] +  brr[i];
	}
	
	printf("\n Sum of array is in 3 array");
	printf("[");
	for (int i=0; i<5; i++)
	{
		printf(" %d",crr[i]);
	}
	printf("]\b");
}