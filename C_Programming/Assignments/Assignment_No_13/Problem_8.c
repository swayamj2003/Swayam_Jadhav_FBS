//8. Merge two arrays
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr, *brr, *merge;
    int i;

    arr = (int*)malloc(5 * sizeof(int));
    brr = (int*)malloc(5 * sizeof(int));
    merge = (int*)malloc(10 * sizeof(int));

    if(arr == NULL || brr == NULL || merge == NULL)
    {
        printf("Memory not allocated");
        return;
    }

    printf("Enter array 1: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter array 2: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    printf("Merge array 1 and 2:\n");
    for (i = 0; i < 5; i++)
    {
        merge[i] = arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        merge[5 + i] = brr[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d", merge[i]);
    }

    free(arr);
    free(brr);
    free(merge);
}
