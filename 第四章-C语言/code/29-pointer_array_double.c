#include <stdio.h>

int main()
{
    int a[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int (*p)[5];
    p = a;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%5d",*(*(p+i)+j));
        }
        printf("\n");
    }
    puts("");
    return 0;
}

