#include <stdio.h>
#include <string.h>

int main()
{
    //char ch[] = "Hello";
    char ch[20];
    printf("请输入一个字符串");
    gets(ch);
    for (int i = strlen(ch) - 1; i>=0; i--)
    {
        putchar(ch[i]);
    }
    putchar('\n');
    return 0;
}



