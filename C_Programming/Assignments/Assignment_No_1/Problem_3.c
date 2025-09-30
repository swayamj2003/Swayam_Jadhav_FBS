//Write a program to check whether a given year is a leap year.

void main()
{
	int year = 1900;
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d\n Leap Year",year);
	}
	else
	{
		printf("%d\n Not Leap Year", year);
	}
}