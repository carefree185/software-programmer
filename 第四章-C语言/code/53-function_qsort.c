#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int a[] = {89, 34, 67, 90, 21, 10,44, 56,80};
    int n = sizeof(a)/sizeof(a[0]);
    int (*p)(const void *, const void *);
    p = compare;
    qsort(a, n, sizeof(int), p);


    for(int i = 0; i < n; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
    return 0;
}


int compare(const void * p, const void *q)
{
    return (*(int *)p - *(int *)q);
}

