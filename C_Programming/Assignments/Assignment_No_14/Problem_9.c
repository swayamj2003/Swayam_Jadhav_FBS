//9. Complex (real, imaginary)

struct complex
{
	float real;
	float imaginary;
};

struct complex inputdeatail();
void display(struct complex x);
void main()
{
	struct complex c1,c2;
	
	c1 = inputdeatail();
	c2 = inputdeatail();
	
	display(c1);
	display(c2);
}

 struct complex inputdeatail()
{
	struct complex a;
	
	printf("ENTER REAL COMPLEX");
	scanf("%f",&a.real);
	printf("ENTER IMAGINARY COMPLEX");
	scanf("%f",&a.imaginary);
	return a;
}

void display(struct complex x)
{
	printf("\nREAL: %f \n",x.real);
	printf("IMAGINARY: %f \n",x.imaginary);
}