#include <stdio.h>

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    void *p = NULL;
    p = (void *)a;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%-5d", *((int *)p + i));
    }
    printf("\n");
    return 0;
}

