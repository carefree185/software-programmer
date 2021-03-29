#include <stdio.h>

int main()
{
    int *p1, *p2;  // 定义一个指针变量, p1这个变量存放的数据就是地址
    int a = 10;
    p1 = &a;  // 将变量a的地址赋值给p1指针变量. a是指针p1的目标变量
    p2 = p1;  // 将p1指针变量的值赋值给p2指针. 
    printf("%p\t%d\n", p1, *p1); // *p1表示取出p1指针的目标变量的值.
    printf("%p\n", &p1);  // &p1获取指针变量p1的内存地址 
    printf("%p\t%d\n", p2, *p2);
    return 0;
}

