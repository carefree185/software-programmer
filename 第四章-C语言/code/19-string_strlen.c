#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[] = {'A',0, 'a', '\0','h'};
    printf("%ld\n",strlen(ch1)); // 输出1
    char ch2[] = "\n\t\x09\089";
    printf("%ld\n", strlen(ch2));  // 输出3
    char ch3[] = "Hello world";
    printf("%ld\n", strlen(ch3));  // 输出11
    char ch4[] = "你好， 世界";
    printf("%ld\n",strlen(ch4));   // 输出16 一个中文字符占3个字节
    size_t length(char *s);
    
    printf("%ld\n", length("hello world!"));
    return 0;
}


size_t length(char *s)
{
    size_t len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return len;
}






