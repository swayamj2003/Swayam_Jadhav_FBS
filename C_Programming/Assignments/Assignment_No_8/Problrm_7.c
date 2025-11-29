/* 
7. Take two arrays and add sum in third array
Example:
arr[5] = {1, 2, 3, 4, 5}
brr[5] = {10, 20, 30, 40, 50}
crr[5] = {11, 22, 33, 44, 55}
*/

#include <stdio.h>

void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];
    int i;

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

    printf("\nSum of Array1 and Array2 is\nArray 3: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
}
