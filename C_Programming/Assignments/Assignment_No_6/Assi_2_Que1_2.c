/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/


/*
//TYPE 1
#include <stdio.h>
void triangle();  // Function declaration
void main()
{
    triangle();  // Function call
}

void triangle()
{
    int s1, s2, s3;
    printf("Enter sides of triangle S1 S2 S3: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1 == s2 && s2 == s3)
        printf("Triangle is Equilateral\n");
    else if(s1 == s2 || s1 == s3 || s2 == s3)
        printf("Triangle is Isosceles\n");
    else
        printf("Triangle is Scalene\n");
}
*/


/*
//TYPE 2
#include <stdio.h>
void triangle(int s1, int s2, int s3);  // Function declaration
void main()
{
    int a, b, c;
    printf("Enter sides of triangle S1 S2 S3: ");
    scanf("%d %d %d", &a, &b, &c);

    triangle(a, b, c);  // Pass sides to function
}

void triangle(int s1, int s2, int s3)
{
    if(s1 == s2 && s2 == s3)
        printf("Triangle is Equilateral\n");
    else if(s1 == s2 || s1 == s3 || s2 == s3)
        printf("Triangle is Isosceles\n");
    else
        printf("Triangle is Scalene\n");
}
*/


/*
//TYPE 3
#include <stdio.h>
int triangle();  // Function declaration
void main()
{
    int type = triangle();  // Call function
    if(type == 1)
        printf("Triangle is Equilateral\n");
    else if(type == 2)
        printf("Triangle is Isosceles\n");
    else
        printf("Triangle is Scalene\n");
}

int triangle()
{
    int s1, s2, s3;
    printf("Enter sides of triangle S1 S2 S3: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 == s2 && s2 == s3)
        return 1;  // Equilateral
    else if(s1 == s2 || s1 == s3 || s2 == s3)
        return 2;  // Isosceles
    else
        return 3;  // Scalene
}
*/


//TYPE 4
#include <stdio.h>
int triangle(int s1, int s2, int s3);  // Function declaration
void main()
{
    int a, b, c;
    printf("Enter sides of triangle S1 S2 S3: ");
    scanf("%d %d %d", &a, &b, &c);

    int type = triangle(a, b, c);  // Call function with arguments
    if(type == 1)
        printf("Triangle is Equilateral\n");
    else if(type == 2)
        printf("Triangle is Isosceles\n");
    else
        printf("Triangle is Scalene\n");
}

int triangle(int s1, int s2, int s3)
{
    if(s1 == s2 && s2 == s3)
        return 1;  // Equilateral
    else if(s1 == s2 || s1 == s3 || s2 == s3)
        return 2;  // Isosceles
    else
        return 3;  // Scalene
}
