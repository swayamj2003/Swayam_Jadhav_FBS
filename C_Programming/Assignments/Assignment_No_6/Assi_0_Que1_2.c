#include<stdio.h>
//Write a C program to find the area of a circle.
//  A=PI*r2

/*void main()
{
	int Radius,Area,PI;
	int r;
	
	Radius=4;
	PI=3.141; //(22/7=3.141) (its value of pi..)
	
	Radius=Radius*Radius;
	printf("Radius=%d\n",Radius); //16

	Area= PI * Radius;
	printf("Area = %d\n",Area);//48
	
	
}*/


//TYPE ONE

/*void area_of_circle();		//fun declaratin
void main()
{
	printf("start \n");
	area_of_circle();		//fun call
	printf("end \n");
}

void area_of_circle()		//fun defination
{
	int Radius,Area,PI;
	
	printf("Enter the radius of circle");
	scanf("%d",&Radius);			//4

	PI=3.141; //(22/7=3.141) (its value of pi..)

	Area= PI * Radius*Radius;
	printf("Area = %d\n",Area);//48
	
}*/

/*
//TYPE TWO
int area_of_circle();		//fun declaratin
void main()
{

	int Area=area_of_circle();	
		printf("Area = %d\n",Area);//48	//fun call

}

int area_of_circle()		//fun defination
{
	int Radius,Area,PI;
	
	printf("Enter the radius of circle");
	scanf("%d",&Radius);			//4

	PI=3.141; //(22/7=3.141) (its value of pi..)

	Area= PI * Radius*Radius;
	return Area;
	
}
*/

/*
//TYPE THREE
int area_of_circle(int Area);	
void main()
{

	int Radius,PI;
		//PI=3.141; //(22/7=3.141) (its value of pi..)
	printf("Enter the radius of circle");
	scanf("%d",&Radius);
	
	int Area=area_of_circle(Area);	

}

int area_of_circle(int Area)	
{

	int	PI=3.141,Radius; //(22/7=3.141) (its value of pi..)
	
	Area= PI * Radius*Radius;
	printf("Area = %d\n",Area);
	
}
*/

//TYPE FOUR
int area_of_circle(int Area);	
void main()
{

	int Radius,PI;
		//PI=3.141; //(22/7=3.141) (its value of pi..)
	printf("Enter the radius of circle");
	scanf("%d",&Radius);
	
	int Area=area_of_circle(Area);	
	printf("Area = %d\n",Area);

}

int area_of_circle(int Area)	
{

	int	PI=3.141,Radius; //(22/7=3.141) (its value of pi..)
	
	return Area = PI * Radius*Radius;
	//return Area;
	
}
