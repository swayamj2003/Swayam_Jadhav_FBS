
//3. strcat() ? Join (concatenate) two strings

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[] = "Hello ";
	char str2[] = "swayam";
	
	strcat(str1, str2);
	
	printf("After attach: %s",str1);
}