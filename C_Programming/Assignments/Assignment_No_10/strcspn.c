
//14. strcspn() ? Length before first match

#include <stdio.h>
#include <string.h>

void main()
{
    char name[20] = "Swayam";
    printf("Original string: %s\n", name);

    strrev(name);
    printf("Reversed string: %s", name);
}