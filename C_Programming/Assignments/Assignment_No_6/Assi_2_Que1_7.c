/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/

/*
//TYPE 1
void main()
{
	person();
}

void person()
{
	int age;
	printf("Enter Person Age \n");
	scanf("%d",&age);
	
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
*/


/*
//TYPE 2

void person(int age);  // Function declaration
void main()
{
    int age;
    printf("Enter Person Age: ");
    scanf("%d", &age);

    person(age);  // Pass age as argument
}

void person(int age)
{
    printf("Age = %d\n", age);
    if(age <= 12)
        printf("Child\n");
    else if(age <= 19)
        printf("Teenager\n");
    else if(age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}
*/


/*
//TYPE 3

int person();  // Function declaration
void main()
{
    int code = person();  // Call function
    if(code == 1)
        printf("Child\n");
    else if(code == 2)
        printf("Teenager\n");
    else if(code == 3)
        printf("Adult\n");
    else
        printf("Senior\n");
}

int person()
{
    int age;
    printf("Enter Person Age: ");
    scanf("%d", &age);
    if(age <= 12)
        return 1;
    else if(age <= 19)
        return 2;
    else if(age <= 59)
        return 3;
    else
        return 4;
}
*/

//TYPE 4

int person(int age);  // Function declaration
void main()
{
    int age;
    printf("Enter Person Age: ");
    scanf("%d", &age);

    int code = person(age);  // Pass age and get code
    if(code == 1)
        printf("Child\n");
    else if(code == 2)
        printf("Teenager\n");
    else if(code == 3)
        printf("Adult\n");
    else
        printf("Senior\n");
}

int person(int age)
{
    if(age <= 12)
        return 1;
    else if(age <= 19)
        return 2;
    else if(age <= 59)
        return 3;
    else
        return 4;
}
