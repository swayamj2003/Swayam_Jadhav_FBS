//Write a program to find greatest of three numbers using nested if-else.

void main()
{
	int a, b,c;
	a=150;
	b=105;
	c=20;
	
	if (a > b)
	{
		if(a > c)
		{
			printf("Greatest num is a = %d",a);
		}
		else
		{
			printf("Greatest num is c = %d",c);
		}
	}
	else 
	{
		if(b > c)
		{
			printf("Greatest num is b = %d",b);
		}
		else
		{
			printf("Greatest num is c = %d",c);
		}
	}
	
}