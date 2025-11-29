//2. Employee (id, name, salary)

struct employee
{
	int id;
	char name[50];
	double salary;
};

void main()
{
	struct employee e1,e2;
	
	printf("Detail of enployee 1 \n");
	strcpy(e1.name, "omkar");
	e1.id=01;
	e1.salary =10500;
	
	printf("Name of Employee :%s \n",e1.name);
	printf("Employee ID :%d \n",e1.id);
	printf("Salary of Employee :%ld \n",e1.salary);
	
	printf("\nDetail of Employee 2 \n");
	printf("Enter name");
	scanf("%s",e2.name);
	printf("Enter id no");
	scanf("%d",&e2.id);
	printf("Enter salary");
	scanf("%d",&e2.salary);
	
	printf("\nName of Employee :%s \n",e2.name);
	printf("Employee ID :%d \n",e2.id);
	printf("Salary of Employee :%ld \n",e2.salary);
	
}