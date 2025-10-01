/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

void main()
{
	int s1=30, s2=30, s3=10;
	
	if(s1==s2 && s2==s3)
	{
		printf("Triangle is equilateral\n");
	}
	
	else if (s1==s2 || s1==s3 || s2==s3 )
	{
		printf("Triangle is isosceles\n");
	}
	
	else
	{
		printf("Triangle is scalene\n");
	}

}