#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello world!";
    char dest1[100], dest2[100];
    // strcpy(dest1, s);  // 复制字符串s到dest1字符数中
    // strncpy(dest2, s, 5);  // 复制字符串s的前五个字符到dest2字符数组中.
    // dest2[5] = '\0';  // 给dest2添加一个结束标构成字服串
    // puts(dest1);  // 输出dest1字符数组
    // puts(dest2);  // 输出dest2字符数组
    char *copy(char *dest, const char *src);
    copy(dest1, s);
    puts(dest1);
    return 0;
}


char *copy(char *dest,const char *src)
{
    if(sizeof(dest) >= sizeof(src))
    {
        long int length = strlen(src);
        for(int i = 0; i < length; i++)
        {
           dest[i] = src[i];
        }
    }
    else
    {
        printf("dest空间不足\n");
    }
    return dest;
}





