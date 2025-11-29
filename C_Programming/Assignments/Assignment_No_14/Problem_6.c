//6.Date (date, month, year)
struct date
{
	int date;
	char month[20];
	int year;
};

struct date inputdetail();
void display(struct date x);
void main()
{
	struct date a1,a2;
	
	a1 = inputdetail();
	a2 = inputdetail();
	
	display(a1);
	display(a2);
}

struct date inputdetail()
{
	struct date a;
	
	printf("ENTER DATE");
	scanf("%d",&a.date);
	printf("ENTER MONTH");
	scanf("%s",a.month);
	printf("ENTER YEAR");
	scanf("%d",&a.year);
	return a;
}

void display(struct date x)
{
	printf("\nDATE: %d \n",x.date);
	printf("MONTH: %s \n",x.month);
	printf("YEAR: %d \n",x.year);
}