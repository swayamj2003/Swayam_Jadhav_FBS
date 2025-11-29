//TYPE THREE
#include <stdio.h>
float area_of_circle(float *r);
void main()
{
	float radius , area;
	
	printf("Enter radius: ");
	scanf("%f",&radius);
	

	area = area_of_circle(&radius);
	
	printf("Radius = %.2f\n", radius);
    printf("Area = %.2f\n", area);
}

float area_of_circle(float *r)
{

	float PI = 3.141;
	float area = PI * (*r) * (*r);
	return area;
	
}