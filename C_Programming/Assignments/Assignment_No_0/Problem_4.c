//Write a C program to swap two numbers using a temporary third variable.
// c is consider as temp

void main()
{
	int a,b,c;
	a=50;
	b=100;
	
	printf("After swapping\n");
	printf("a=%d,b=%d\n",a,b);
	
	c=a; //50
	a=b; //100
	b=c; //50
	
	printf("Before swapping\n");
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	
}