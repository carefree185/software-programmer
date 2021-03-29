#include <stdio.h>
long long factorial(long n);
int main()
{
    long num = 0;
    long long a;
    printf("输入要计算的数据: ");
    scanf("%ld", &num);
    a = factorial(num);
    printf("%ld! = %lld\n", num, a);
    return 0;
}

long long factorial(long n)
{
    long long ret;
    if(n <= 1)
    {
        ret = 1;
    }
    else
    {
        ret = n * factorial(n -1);
    }
    return ret;
}

