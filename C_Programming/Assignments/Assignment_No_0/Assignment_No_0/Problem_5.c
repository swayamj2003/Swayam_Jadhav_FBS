//Write a C program to input five numbers and find their average.
//Avrage= sum of num / Total no of num

void main()
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
}