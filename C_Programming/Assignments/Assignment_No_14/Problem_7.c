//7. Time (hour, min, sec)

struct time
{
	int sec;
	int min;
	int hour;
};

struct time inputtime();
void display(struct time x);
void main()
{
	struct time t1,t2;
	
	t1 = inputtime();
	t2 = inputtime();
	
	display(t1);
	display(t2);
	
}

struct time inputtime()
{
	struct time a;
	
	printf("ENTER HOUR");
	scanf("%d",&a.hour);
	printf("ENTER MIN");
	scanf("%d",&a.min);
	printf("ENTER SEC");
	scanf("%d",&a.sec);
	return a;
}

void display(struct time x)
{
	printf("\nHOUR: %d \n",x.hour);
	printf("MINUTE: %d \n",x.min);
	printf("SECOND: %d \n",x.sec);
}