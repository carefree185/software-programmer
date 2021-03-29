#include <stdio.h>

char * string_cat(char *dest, const char *src);

int main()
{
    char dest[100] = "welcome ";
    char src[] = "hello world";
    printf("未连接之前: %s\n", dest);
    char * ret = string_cat(dest, src);
    printf("连接之后: 数组名: %s \t 返回地址: %s\n", dest, ret);
    return 0;
}

char *string_cat(char *dest, const char *src)
{
    char *ret = dest;
    while(*dest)
    {
        dest++;
    }
    while(*src)
    {
        *dest++ = *src++;
    }
    *dest = *src;
    return ret;
}

