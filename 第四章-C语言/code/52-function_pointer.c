#include <stdio.h>

int add(int m, int n);
int sub(int m, int n);
int mul(int m, int n);
int div(int m, int n);

int main()
{
    int a = 20, b = 10;
    //int (*p)(int m, int n);
    int (*p[4])(int m, int n);
    p[0] = add;
    printf("%d + %d = %d\n",a, b, (*p[0])(a, b));
    p[1] = sub;
    printf("%d - %d = %d\n", a, b, (*p[1])(a, b));
    p[2] = mul;
    printf("%d * %d = %d\n", a, b, (*p[2])(a, b));
    p[3] = div;
    printf("%d / %d = %d\n", a, b, (*p[3])(a, b));
    return 0;
}


int add(int m, int n)
{
    return m + n;
}

int sub(int m, int n)
{
    return m - n;
}

int mul(int m, int n)
{
    return m * n;
}

int div(int m, int n)
{
    return m / n;
}

