//Write a C program to convert given minutes into hours and remaining minutes.

void main()
{
	int minutes=320;
	int hours;
	
	
	hours=minutes/60;
	printf("hours=%d\n",hours);
	
	minutes=minutes%60;
	printf("minutes=%d\n",minutes);
}