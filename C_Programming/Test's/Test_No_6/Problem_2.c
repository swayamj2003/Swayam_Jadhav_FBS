//Q 2 WAP in a c to find two maximum number in array

void main()
{
    int arr[5];
    printf("Enter five numbers:\n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1, max2;
    max1 = max2 = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("First maximum number = %d \n", max1);
    printf("Second maximum number = %d \n", max2);
}
