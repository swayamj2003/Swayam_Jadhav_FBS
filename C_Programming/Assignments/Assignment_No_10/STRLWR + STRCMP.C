//17.strlwr() + strcmp()
//convert s1 is in lowercase and chake  s1 and s2 is same.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "HELLO";
    char s2[20] = "hello";

    strlwr(s1);
    if(strcmp(s1, s2) == 0)
        printf("Strings are same\n");
    else
        printf("Strings are different\n");
}
