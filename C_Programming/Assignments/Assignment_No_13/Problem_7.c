/*
7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr, *brr, *crr;   
    int i;

    arr = (int*)malloc(5 * sizeof(int));
    brr = (int*)malloc(5 * sizeof(int));
    crr = (int*)malloc(5 * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory not allocated!");
        return;
    }

    int temp1[5] = {1, 2, 3, 4, 5};
    int temp2[5] = {10, 20, 30, 40, 50};

    for(i = 0; i < 5; i++)
    {
        arr[i] = temp1[i];
        brr[i] = temp2[i];
    }

    printf("\nArray 1: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray 2: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("\nSum of Array1 and Array2 is\n Array 3: ");
    for(i = 0; i < 5; i++)
	{
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);
}
