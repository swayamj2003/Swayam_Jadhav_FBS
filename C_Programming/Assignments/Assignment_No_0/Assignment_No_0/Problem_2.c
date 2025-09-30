//Write a C program to find the area of a circle.
//  A=PI*r2

void main()
{
	int Radius,Area,PI;
	int r;
	
	Radius=4;
	PI=3.141; //(22/7=3.141) (its value of pi..)
	
	Radius=Radius*Radius;
	printf("Radius=%d\n",Radius); //16

	Area= PI * Radius;
	printf("Area = %d\n",Area);//48
	
	
}