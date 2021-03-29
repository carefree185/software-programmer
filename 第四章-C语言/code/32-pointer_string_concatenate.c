#include <stdio.h>

int main()
{
    char str1[40] = "hello";
    char str2[] = " world!";
    
    char *p1 = str1;
    char *p2 = str2;
    while (*p1 != '\0')
    {
        p1++;
    }
    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = *p2;
    printf("%s\n", str1);

    return 0;
}

