#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "你好世界";
    char s2[] = "世界你好";

    if (strcmp(s1, s2)>0)
    {
        printf("s1 > s2\n");
    }
    else if (strcmp(s1, s2) < 0)
    {
        printf("s1 < s2\n");
    }
    else
    {
        printf("s1 == s2\n");
    }
    
    char s3[] = "Hello world";
    char s4[] = "hello world";
    if (strcmp(s3, s4)>0)
    {
        printf("s3 > s4\n");
    }
    else if (strcmp(s3, s4) < 0)
    {
        printf("s3 < s4\n");
    }
    else
    {
        printf("s3 == s4\n");
    }
    return 0;
}

