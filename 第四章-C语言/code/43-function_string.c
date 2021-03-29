#include <stdio.h>

void del_space(char *s);

int main()
{
    char str[] = "hel lo wor ld!  ";
    char *p = str;
    printf("删除空格前: %s\n", str);
    del_space(str);
    printf("删除空格后: %s\n", str);
    return 0;
}

void del_space(char *s)
{
    while(*s)
    {
        if((int)*s == 32)
        {
            char *t;
            t = s;
            while(*t)
            {
                *t = *(t+1);
                t++;
            }        
        }
        s++;
    }
    *s = '\0';
}


