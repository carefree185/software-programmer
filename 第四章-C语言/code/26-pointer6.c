#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    *p = 100;  // 将p指向的内存空间的值修改为100;
    printf("%d\n", a);

    return 0;
}

