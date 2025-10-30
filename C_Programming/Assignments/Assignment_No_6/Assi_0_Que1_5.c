//Write a C program to input five numbers and find their average.
//Avrage= sum of num / Total no of num

/*void main()
{
	int num1,num2,num3,num4,num5;
	int sum_num,total_num,average;
	
	num1=2;
	num2=4;
	num3=6;
	num4=8;
	num5=10;
	
	sum_num=(num1+num2+num3+num4+num5);
	printf("sum_num= %d\n",sum_num);
	
	total_num=5;
	printf("total_num=%d\n",total_num);
	
//	printf("Avarage\n");
	average=sum_num/total_num;
//	printf("Avarage=%d,a=%d,b=%d\n",average,a,b);
	
	printf("Avarage=%d\n",average);
}*/


/*
//TYPE ONE
#include <stdio.h>

void average();  // function declaration

void main()
{
    average();  // function call
}

void average()
{
    int num1, num2, num3, num4, num5;
    int sum_num, total_num, average;

    num1 = 2;
    num2 = 4;
    num3 = 6;
    num4 = 8;
    num5 = 10;

    sum_num = num1 + num2 + num3 + num4 + num5;
    total_num = 5;
    average = sum_num / total_num;

    printf("Sum = %d\n", sum_num);
    printf("Total = %d\n", total_num);
    printf("Average = %d\n", average);
}
*/


/*
//TYPE TWO
#include <stdio.h>

void average(int, int, int, int, int);  // Function declaration

void main()
{
    int a, b, c, d, e;

    printf("Enter five numbers");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    average(a, b, c, d, e);   // Call with arguments
}

void average(int n1, int n2, int n3, int n4, int n5)
{
    int sum, avg;

    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
}
*/


/*
//TYPE THREE
#include <stdio.h>

int average();							// fun declaration
void main()
{
	int avg;
	
	avg = average();					// fun call with no argument
	printf("\n Average = %d",avg);
}

int average()							// fun defination
{
	int n1, n2, n3, n4, n5;
	printf("Enter five numbers");
	scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);
	
	int sum, avg, total_num;
	
	sum = n1+n2+n3+n4+n5;
	total_num= 5;
	avg = sum / total_num;
	
	printf("\n Sum = %d",sum);
	//printf("\n Average = %d",avg);
	return avg;							//
}
*/


//TYPE FOUR
#include <stdio.h>
int average(int, int, int, int, int);					//fun declaration
void main()
{
	int a, b, c, d, e, avg;
	printf("Enter Five Numbers: ");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	
	
	avg = average(a, b, c, d, e);						// fun call with parameter
	printf("\n Average = %d",avg);
	
}

int average(int num1, int num2, int num3, int num4, int num5)		//fun defination
{	
	int sum, avg, total_num;
	
	sum = num1 + num2 + num3 + num4 + num5;
	total_num = 5;
	avg = sum / total_num;
	
	printf("\n Sum = %d",sum);
	return avg;									//return value to main
}