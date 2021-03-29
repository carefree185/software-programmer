#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
A:
    if(i<=100)
    {
        sum += i;
        i++;
        goto A;
    }
    printf("1+2+…+100 = %d\n",sum);
    return 0;
}

