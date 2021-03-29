#include <stdio.h>

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int *head_p = a, *tail_p = &a[n-1];
    printf("原数组: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *head_p++);
    }
    putchar('\n');
    head_p = a;
    while (head_p < tail_p)
    {
        int tmp;
        tmp = *head_p;
        *head_p = *tail_p;
        *tail_p = tmp;
        head_p++;
        tail_p--;
    }
    printf("交换后的数组: ");
    head_p = a;
    tail_p = &a[n - 1];
    while(head_p != tail_p)
    {
        printf("%d ", *head_p);
        head_p++;
    }
    printf("%d\n", *tail_p);
    


    return 0;
}

