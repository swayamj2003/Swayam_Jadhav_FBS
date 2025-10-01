/*Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/

void main()
{
	printf("1.addition \n 2.subtraction \n 3.multiplication \n 4.division\n");
	int num1=100, num2=50, a, result;
	char ch= 2;
	
	if(ch==1)
	{
		a= num1+ num2; 
		result= ("%d",a); //150
		printf("Result=%d\n",result);
	}
	else if (ch==2)
	{
		a= num1- num2; 
		result= ("%d",a);
		printf("Result=%d\n",result);
	}
	else if (ch==3)
	{
		a= num1* num2; 
		result= ("%d",a);
		printf("Result=%d\n",result);
	}
	else if (ch==4)
	{
		a= num1/ num2; 
		result= ("%d",a);
		printf("Result=%d\n",result);
	}
	else
	{
		printf("Invalid choice");
	}
	
}