#include <stdio.h>

int main()
{
    int *p1, a;
    p1 = &a;
    long *p2, b;
    p2 = &b;
    int c[10];
    int *p3, *p4;
    p3 = &c[1];
    p4 = &c[5];
    printf("p1的地址: %p\tp1+2的地址: %p\n", p1, p1+2);
    printf("p2的地址: %p\tp2+2的地址: %p\n", p2, p2+2) ;
    printf("p4 - p3: %ld\n", p4 - p3);
    return 0;
}

