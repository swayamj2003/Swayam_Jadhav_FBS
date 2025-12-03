
//8. strncat() ? Join part of one string to another

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[] = "Good ";
	char str2[] = "Morning";
	
	strncat(str1, str2, 4);
	printf("%s",str1);
}