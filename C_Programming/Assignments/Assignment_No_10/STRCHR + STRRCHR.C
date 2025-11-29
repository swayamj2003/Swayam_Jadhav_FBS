//18.strcpy() + strrev()

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = "Swayam";
    char copy[20];

    strcpy(copy, name);
    strrev(copy);
    printf("Original= %s\n", name);
    printf("Reversed= %s\n", copy);
}
