
//9. strncpy() ? Copy part of a string

#include <stdio.h>
#include <string.h>

void main()
{
	char str1[] = "Programming";
	char str2[20];
	strncpy(str2, str1, 4);
	str2[4] = '\0';
	printf("%s",str2);
}
