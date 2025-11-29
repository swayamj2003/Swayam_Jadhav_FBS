//19.strlwr() + strcat()

#include <stdio.h>
#include <string.h>

int main()
{
    char x[20] = "HELLO";
    char y[20] = " WORLD";

    strlwr(x);     // hello
    strcat(x, y);  // join both
    printf("Resul= %s", x);
}
