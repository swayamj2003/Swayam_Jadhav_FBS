/*Q.1 wap in c for, to find common element in two array
arr = 1 2 3 4 5
brr = 1 6 7 3 2

o/p = 1 2 3 */

void main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int brr[5] = {1, 6, 7, 3, 2};
	
	for (int i=0; i<5; i++)
	{
		for (int j= 0; j<5; j++)
		{
			if(arr[i] == brr[j])
			{
				printf("The common number is: %d \n",arr[i]);
				break;
			}
		}
	}
}
