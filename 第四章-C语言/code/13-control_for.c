#include <stdio.h>

int main()
{
    int sum1 = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum1 += i;
    }
    printf("1+2+...+100 = %d\n", sum1);
    
    int sum2 = 0;
    int i = 0;
    for(;i<=100;)
    {
        sum2 += i;
        i++;
    }
    printf("1+2+...+100 = %d\n", sum2);

    int sum3 = 0;
    for(int i = 0;;i++)
    {
        if(i <= 100)
        {
            sum3 += i;
        }
        else
        {
            break;

        }
    }
    printf("1+2+...+100 = %d\n", sum3);
    
    printf("九九乘法表\n");
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");

    }
    


    return 0;
}
