#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];
    printf("请输入字符串:");
    gets(ch);
    int length = strlen(ch);
    int i = 0, j = length - 1;
    while(i<j)  // 将字符串反转
    {
        char tmp;
        tmp = ch[i];
        ch[i] = ch[j];
        ch[j] = tmp;
        i++;
        j--;
    }
    printf("反序输出字服串:");
    puts(ch);
    return 0;
}

