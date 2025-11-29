//8.Distance ( feet, inch)
 struct distance
 {
 	int feet;
 	int inch;
 };
 
 struct distance inputdistance();
 void display(struct distance x);
 void main()
 {
 	struct distance d1,d2;
 	
 	d1 = inputdistance();
 	d2 = inputdistance();
 	
 	display(d1);
 	display(d2);
 }
 
struct distance inputdistance()
 {
 	struct distance a;
 	printf("ENTER DISTANCE IN FEET");
 	scanf("%d",&a.feet);
 	printf("ENTER DISTANCE IN INCH");
 	scanf("%d",&a.inch);
 	return a;
 }
 
 void display(struct distance x)
 {
 	printf("\nFEET: %d \n",x.feet);
 	printf("INCH: %d \n",x.inch);
 }