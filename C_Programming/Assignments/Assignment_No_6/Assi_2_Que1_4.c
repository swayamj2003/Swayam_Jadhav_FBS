/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/

/*
//TYPE 1
void main()
{
	result();
}
void result()
{
	int marks;
	printf("Enter marks .../100");
	scanf("%d",&marks);
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
*/


/*
//TYPE 2
void result(int marks);  // Function declaration
void main()
{
    int marks;
    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);

    result(marks);  // Pass marks as argument
}

void result(int marks)
{
    if(marks >= 75)
        printf("Distinction\n");
    else if(marks >= 65)
        printf("First Class\n");
    else if(marks >= 55)
        printf("Second Class\n");
    else if(marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
    printf("Marks = %d\n", marks);
}
*/


/*
//TYPE 3
char* result();  // Function declaration
void main()
{
    char* grade = result();  // Call function
    printf("Grade: %s\n", grade);
}

char* result()
{
    static char grade[20];  // Use static so it persists after return
    int marks;
    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);

    if(marks >= 75)
        sprintf(grade, "Distinction");
    else if(marks >= 65)
        sprintf(grade, "First Class");
    else if(marks >= 55)
        sprintf(grade, "Second Class");
    else if(marks >= 40)
        sprintf(grade, "Pass Class");
    else
        sprintf(grade, "Fail");
    return grade;
}
*/


//TYPE 4
char* result(int marks);  // Function declaration
void main()
{
    int marks;
    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);

    char* grade = result(marks);  // Pass marks and get grade
    printf("Grade: %s\n", grade);
}

char* result(int marks)
{
    static char grade[20];  // Use static so string persists after return
    if(marks >= 75)
        sprintf(grade, "Distinction");
    else if(marks >= 65)
        sprintf(grade, "First Class");
    else if(marks >= 55)
        sprintf(grade, "Second Class");
    else if(marks >= 40)
        sprintf(grade, "Pass Class");
    else
        sprintf(grade, "Fail");
    return grade;
}
