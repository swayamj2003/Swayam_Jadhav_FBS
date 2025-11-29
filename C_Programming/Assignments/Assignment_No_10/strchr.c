
//5. strchr() ? Find first occurrence of a character

#include<stdio.h>
#include<string.h>

void main()
{
	char str[10] ="Hello";
	
	int *ptr = strchr(str, 'l');
	
	printf("Found part : %s",ptr);
}