#include <stdio.h>

void exchange(int *pa, int *pb);

int main()
{
    int a = 10, b = 20;
    printf("before: a = %d, b =%d\n", a, b);
    exchange(&a, &b);
    printf("after: a = %d, b = %d\n", a, b);
    return 0;
}


void exchange(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

