//16.strcpy() + strupr() (uppercase)

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = "swayam";
    char copy[20];
    
    strcpy(copy, name);
    strupr(copy);

    printf("Original= %s\n", name);
    printf("Uppercase Copy= %s\n", copy);
}
