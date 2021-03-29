#include <stdio.h>

int main()
{
    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        *(a+i) = i;
    }
    printf("输出数组: ");

    int *p;
    p = a;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", *p++);
    }
    printf("\n");
    return 0;
}

