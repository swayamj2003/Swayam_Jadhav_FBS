//5. SalesManager (id, name, salary, incentive, target)

struct salesmanager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	int target;
};

struct salesmanager inputdetails();
void display(struct salesmanager x);
void main()
{
	struct salesmanager sm1,sm2;
	
	sm1 = inputdetails();
	sm2 = inputdetails();
	
	display(sm1);
	display(sm2);
}

struct salesmanager inputdetails()
{
	struct salesmanager a;
	
	printf("ENTER ID");
	scanf("%d",&a.id);
	printf("ENTER NAME");
	scanf("%s",a.name);
	printf("EMTER SALARY");
	scanf("%f",&a.salary);
	printf("EMTER INCENTIVE");
	scanf("%f",&a.incentive);
	printf("ENTER TARGET");
	scanf("%d",&a.target);
	return a;
	
}

void display(struct salesmanager x)
{
	printf("\nID OF SALESMANAGER: %d \n",x.id);
	printf("NAME OF SALESMANAGER: %s \n",x.name);
	printf("SALARY OF SALESMANAGER: %f \n",x.salary);
	printf("INCENTIVE OF SALESMANAGER: %f \n",x.incentive);
	printf("TARGET OF SALESMANAGER: %d \n",x.target);
}