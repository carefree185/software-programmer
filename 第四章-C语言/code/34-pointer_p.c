#include <stdio.h>

int main()
{
    int m =10;
    int *p = &m;
    int* *q = &p;

    printf("p=%p *q=%p\n", p, *q);
    printf("%d %d %d\n", m, *p, **q);



    return 0;
}

