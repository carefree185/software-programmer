#include <stdio.h>

int main()
{
    char str[] = "hello world!";
    char *p = str;
    printf("%p %p\n", p, str);
    printf("%c\n", *p);
    
    char *p1 = "hello world";
    char *p2 = "hello world";  // p1 p2指向的内存地址一样.
    printf("&p1 = %p %p %s\n", &p1, p1, p1);
    printf("&p2 = %p %p %s\n", &p2, p2, p2);
    return 0;
}

