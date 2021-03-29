#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "hello world!";
    printf("%p\t%p\n",&s[4], strchr(s, 'o'));
    printf("%p\t%p\n", &s[9], strrchr(s, 'l'));
    printf("%p\t%p\n", &s[0], strstr(s, "hello"));
    char s2[] = "Hello world!";
    printf("%p\t%p\n", &s2[0], strcasestr(s2, "hello"));

    return 0;
}

