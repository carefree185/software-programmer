#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    while (++i < 101)
    {
        sum += i;
    }
    printf("1+2+...+100 = %d\n", sum);

    return 0;
}

