//Write a C program to input five numbers and find their average.
//Avrage= sum of num / Total no of num

//TYPE THREE
#include <stdio.h>
void Avrage(int *num1, int *num2, int *num3, int *num4, int *num5);
void main()
{
	int no1, no2, no3, no4, no5;
	printf("Enter Five Number");
	scanf("%d %d %d %d %d",&no1, &no2, &no3, &no4, &no5);
	
	Avrage(&no1, &no2, &no3, &no4, &no5);
}

void Avrage(int *num1, int *num2, int *num3, int *num4, int *num5)
 {
 	int avg, total_num, sum;
 	
 	total_num = 5;
 	sum = *num1 + *num2 + *num3 + *num4 + *num5;
 	printf("\n Sum: %d",sum);
 	
 	avg = sum / total_num;
 	printf("\n Avrage: %d", avg);
 }