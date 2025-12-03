
//4. strcmp() ? Compare two strings

#include<stdio.h>
#include<string.h>

void main()
{
	char str1 [] = "Apple";
	char str2 [] = "Apple";
	
	strcmp(str1, str2);
	
	if(strcmp(str1, str2) == 0)
	printf("Both string are same");
	else
	printf("String are not same");
}