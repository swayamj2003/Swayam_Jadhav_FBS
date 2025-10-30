#include<stdio.h>
//Write a C program to add two integers and display the result

/*void main()
{
	int num1,num2,num3;
	num1=05;
	num2=10;
	
	num3=num1+num2;
	
	printf("Addition %d + %d \n= %d",num1,num2,num3);
}*/


//TYPE ONE


/*void addition();			//fun declaration
void main()
{
	printf("start\n");
	addition();				//fun call
	printf("end\n");
}
void addition()				//fun defination
{
	int num1,num2,result;
	printf("Enter the number");
	scanf("%d%d",&num1,&num2);
	
	result=num1+num2;
	printf("Result=%d \n",result);
}*/

/*
//TYPE TWO
int addition();			//fun declaration
void main()
{

	int result = addition();	
	printf("Result=%d \n",result);			//fun call

}
int addition()				//fun defination
{
	int num1,num2,result;
	printf("Enter the number");
	scanf("%d%d",&num1,&num2);
	
	
	result=num1+num2;
	return result;
	
	//return result=num1+num2;

}
*/

/*
//TYPE THREE
int addition(int num1, int num2);  // Function declaration

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    addition(num1, num2);  
}

int addition(int num1, int num2)  
{
    int result;
    result = num1 + num2;
    printf("Result = %d\n", result);
}
*/

//TYPE FOUR
int addition(int num1, int num2);  
void main()
{
    int num1, num2,result;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    result = addition(num1, num2);  
    printf("Result = %d\n", result);
}

int addition(int num1, int num2)  
{

     return num1 + num2;
    
}
