#include <stdio.h>

// 计算 s=2^2!+3^2!

int power(int x, int n)
{
    int pow = 1;
    for(int i = 0; i < n; i++)
    {
        pow *= x;
    }
    return pow;
}

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int main()
{
    int a = 2, b = 3;
    int sum;
    sum = factorial(power(a, a)) + factorial(power(b, a));
    printf("%-5d\n", sum);
    return 0;
}

