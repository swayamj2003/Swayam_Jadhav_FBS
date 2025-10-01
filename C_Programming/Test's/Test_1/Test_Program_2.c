//WAP to check if the year is leap or not.

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