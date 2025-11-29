//6. Accept array and print only prime numbers of array.

void onlyprime(int arr[], int n);
void main()
{
    int arr[10];
    
    printf("Enter 10 numbers in array 1: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
	
	onlyprime(arr, 10);

}
void onlyprime(int arr[], int n)
{
	int flag;
    printf("\nPrime numbers in the array are: ");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 2)
            continue;
            flag = 0;
            
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", arr[i]); 
        }
    }
}
