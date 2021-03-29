#include <stdio.h>
int test1(int x, int y);

int main()
{
    int a = 2, b = 3;
    int c;
    printf("a: %p\tb: %p\n", &a, &b);
    c = test1(a, b);  // 调用test1函数时, 重新开辟内存空间用于存放a, b的值.
    printf("%d\n", c);
    return 0;
}

int test1(int x, int y)
{
    printf("x: %p\ty: %p\n", &x, &y);
    return x + y;
}

