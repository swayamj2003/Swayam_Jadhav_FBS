/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/

void main()
{
	int age= 59;
	
	if (age <= 12)
	{
		printf("Age = %d\n",age);
		printf("Child");
	}
	else if (age <= 19)
	{
		printf("Age = %d\n",age);
		printf("Teenager");
	}
	else if ( age <= 59)
	{
		printf("Age = %d\n",age);
		printf("Adult");
	}
	else if ( age <= 60 || age >= 60 )
	{
		printf("Age = %d\n",age);
		printf("Senior");
	}
}