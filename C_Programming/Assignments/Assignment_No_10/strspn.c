
//13. strspn() ? Length of initial matching characters

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "abcdef";
    printf("%d", strspn(str, "abc"));
}
