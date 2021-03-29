#include <stdio.h>
#include <ctype.h>

int count_exchange(char *src, int n);

int main()
{
    char str[] = "hello world";
    int num;
    printf("%ld\n", sizeof(str)/sizeof(char));
    printf("字符串: %s",str);
    num = count_exchange(str, sizeof(str)/sizeof(char));
    printf("中小写字母有: %d个\n", num);
    printf("小写字母变成大写字母后的字符串: %s\n", str);

    return 0;
}

int count_exchange(char *src, int n) // char *src = str;
{
    int num = 0;
    while(*src)  // *src != '\0'
    {
        if(isalpha(*src))
        {
            if (islower(*src))
            {
                num++;
                *src = toupper(*src);
            }
        }
        src++;
    }
    return num;
}





