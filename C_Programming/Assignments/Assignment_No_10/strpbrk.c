
//12. strpbrk() ? Find first matching character from a set

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Swayam";
    printf("%s", strpbrk(str, "xyzam"));
}
