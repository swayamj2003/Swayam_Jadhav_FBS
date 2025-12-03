
//7. strtok() ? Split string into words

#include<stdio.h>
#include<string.h>

void main()
{
	char str[] = "I AM FROM SANGLI";
	char *ptr = strtok(str, " ");
	
	while (ptr != '\0')
	{
		printf("%s\n",ptr);
		ptr = strtok('\0', " ");
	}
	
}