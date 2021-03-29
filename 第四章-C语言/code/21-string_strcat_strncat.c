#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "Hello ";
    char src[] = "world!";
    puts(dest);
    strcat(dest, src);
    puts(dest);
    strncat(dest, src, 3);
    puts(dest);
    return 0;
}

