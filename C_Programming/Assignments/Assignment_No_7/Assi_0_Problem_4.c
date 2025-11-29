void main()
{
	int x ,y;
	printf("Enter number X and Y");
	scanf("%d %d",&x, &y);
	
	printf("\n Before Swapping");
	printf("X= %d and Y= %d",x , y);
	
	int res;
	res = swap(&x, &y);
	
	printf("\n After Swapping");
	printf("X= %d and Y= %d",x , y);
}

int swap(int *a, int *b)
{
	int temp, res;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	return res;
}