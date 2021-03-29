#include <stdio.h>

char * del_space(char *s);

int main()
{
    char str[] = "hello world";
    char *p;
    p = del_space(str);
    printf("%s\n", p);
    return 0;
}

char * del_space(char *s)
{
    char *ret = s;
    char *p = s;
    while (*s)
    {
        if(*s != ' ')
        {
            *p++ = *s++;
        }
        else
        {
            s++;
        }
    }
    *p = *s;
    return ret;
}



