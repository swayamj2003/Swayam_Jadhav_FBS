
//6. strstr() ? Find a word inside a string

#include<stdio.h>
#include<string.h>

void main()
{
	char str[] = "Hello swayam jadhav";
	
	char *ptr = strstr(str, "swayam");
	
	printf("Found: %s",ptr);
}