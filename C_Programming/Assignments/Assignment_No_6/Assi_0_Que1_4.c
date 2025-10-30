//Write a C program to swap two numbers using a temporary third variable.
// c is consider as temp

/*void main()
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
	
}*/

//TYPE ONE


/*void main()
{
	swap();
}

void swap()
{
	int a,b;
	int temp;	
	printf("Enter the number of A and B");
	scanf("%d%d",&a,&b);	
	//a=50;
	//b=100;
	
	printf("After swapping\n");
	printf("a=%d,b=%d\n",a,b);
	
	temp=a; //50
	a=b; //100
	b=temp; //50
	
	printf("Before swapping\n");
	printf("a=%d,b=%d \n",a,b);
}*/


/*
//TYPE TWO

void swap(int a, int b)
void main()											// fun declaration
{
	int x, y;
	printf("Enter two valus of a and b");
	scanf("%d %d",&x, &y);
	
	swap(x,y);										//fun call with argumet
	
}

void swap(int a, int b)								//fun defination
{
	int temp;
	printf("\n Before swapping");
	printf("a= %d b=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n After swapping");
	printf("a= %d b=%d",a,b);
}
*/


//TYPE THREE
void main()
{
	int x, y;
	printf("Enter two valus of a and b");
	scanf("%d %d",&x, &y);
	
	int res;
	res = swap(x,y);										//fun call with argumet
	
}

void swap(int a, int b)
{
	int temp;
	printf("\n Before swapping");
	printf("a= %d b=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n After swapping");
	
	int res;
	return res;
}



/*//TYPE FOUR
void main(int x , int y)     								//fun dec
{
	int a,b;

	printf("Enter the number of A and B");
	scanf("%d%d",&a,&b);
	
			
	printf("After swapping\n");
	printf("a=%d,b=%d\n",a,b);
	
	int res= swap(a,b);												//fun call
		printf("Before swapping a= %d,b= %d\n",x,y);

}

void swap(int x , int y)									//fun definatin
{

	int temp,res;	
	
	temp=x; //50
	x=y; //100
	y=temp; //50
	
	return res ;
}*/