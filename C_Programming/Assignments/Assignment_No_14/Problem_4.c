//4. HR (id, name, salary, commission)

struct HR{
	int id;
	char name[20];
	double salary;
	double commission;
};

struct HR inputdeatail();
void display(struct HR x);
void main()
{
	struct HR h1,h2;
	h1 = inputdeatail();
	h2 = inputdeatail();
	
	display(h1);
	display(h2);
	
}

struct HR inputdeatail()
{
	struct HR a;
	
	printf("Enter ID of HR");
	scanf("%d",&a.id);
	printf("Enter HR name");
	scanf("%s",a.name);
	printf("Enter Salary of HR");
	scanf("%ld",&a.salary);
	printf("Enter Commission of HR");
	scanf("%ld",&a.commission);
	return a;
	
}

void display(struct HR x)
{
	
	printf("\nID OF HR: %d \n",x.id);
	printf("NAME OF HR: %s \n",x.name);
	printf("Salary OF HR: %ld \n",x.salary);
	printf("Commission OF HR: %ld \n",x.commission);
}

