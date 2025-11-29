//15.strcat() + strlen()
//Join two strings and find total length.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[30] = "Hello ";
    char b[20] = "Swayam";
    strcat(a, b);
    printf("After strcat: %s\n", a);
    printf("Length of string: %d\n", strlen(a));
}

