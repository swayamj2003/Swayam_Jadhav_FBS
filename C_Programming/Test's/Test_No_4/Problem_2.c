void main()
{
	int num1,num2,num;
	printf("Enter the number");
	scanf("%d%d",&num1,&num2);
	
	int temp=num1;
	temp= temp*temp;
	//printf("temp is %d",temp);
	
	num=temp*num2;
	
	printf("Power of %d and %d=%d",num1,num2,num);
}