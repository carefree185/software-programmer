#include <stdio.h>

int main()
{
    int a[] = {5, 8, 7, 6, 2, 7, 3};
    int y, *p=&a[1];
    //  y = (*--p)++;  // y = 5
    y = ++(*--p);  // y = 6
    printf("%d\n", y);
    printf("%d\n", a[0]);
    p = a;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}

