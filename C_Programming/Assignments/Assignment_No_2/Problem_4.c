/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/

void main()
{
	int marks= 59;
	if (marks >= 75)
	{
		printf("Distinction\n");
	}
	else if (marks >= 65)
	{
		printf("First Class\n");
	}
	else if (marks >=55)
	{
		printf("Second Class\n");
	}
	else if (marks >= 40)
	{
		printf("Pass Class\n");
	}
	else
	{
		printf("Fail\n");
	}
	
	printf("Marks is =%d", marks );
}