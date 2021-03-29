#include <stdio.h>

int a = 10;
void test1()
{
    extern int b; // 声明全局变量. b在test1之后定义, 在test1中无法使用, 可以使用extern声明全局变量.
    printf("in test1 a = %d\n", a);
    printf("in test1 b = %d\n", b);
}

int b = 20;
void test2();

int main()
{
    test1();
    printf("\n");
    test2();
    return 0;
}

void test2()
{
    printf("int test2 a = %d\n",a);
    printf("int test2 b = %d\n", b);
}



