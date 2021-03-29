#include <stdio.h>
#include <string.h>

char *getstring()
{
    char str[20];
    strcpy(str, "hello");
    return str;
}

int main()
{
    printf("%s\n", getstring());
    return 0;
}

