
//10. strncmp() ? Compare first few characters

#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[] = "Computer";
    char str2[] = "Compose";

    int result = strncmp(str1, str2, 4);  
    if (result == 0)
        printf("First 4 letters are same");
    else
        printf("First 4 letters are different");
}