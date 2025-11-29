//Admin (id, name, salary, allowance)

struct admin 
{
	int id;
	char name[50];
	double salory;
	int allowance;
};

void main()
{
	struct admin a1,a2;
	
	printf("Detail of enployee 1 \n");
	strcpy(a1.name, "swayam");
	a1.id = 001;
	a1.salory = 10100;
	a1.allowance=1001;
	
	printf("Name :%s \n",a1.name);
	printf("ID :%d \n",a1.id);
	printf("Salary :%ld \n",a1.salory);
	printf("Company Allowance :%u \n",a1.allowance);
	
	printf("\nDetail of enployee 2 \n");
	
	printf("Enter Name");
	scanf("%s",a2.name);
	printf("Enter Id");
	scanf("%d",&a2.id);
	printf("Enter Salory");
	scanf("%d",&a2.salory);
	printf("Company Allowance");
	scanf("%d",&a2.allowance);
	
	printf("\nName :%s \n",a2.name);
	printf("ID :%d \n",a2.id);
	printf("Salary :%u \n",a2.salory);
	printf("Company Allowance :%u \n",a2.allowance);
}