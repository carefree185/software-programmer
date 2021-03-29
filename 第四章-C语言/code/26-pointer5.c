#include <stdio.h>

int main()
{
    int a, *p1 = &a;   // 基本整型指针变量, 指针目标的数据类型是int型
    float b, *p2 = &b;  // 浮点型指针变量, 指针目标的数据类型是float型
    char c, *p3 = &c;  // 字符型指针变量, 指针目标的数据类型是char型
    printf("请输入数据: ");
    scanf("%d %f %c", p1, p2, p3);
    printf("展示输入的数据: %d %f %c\n", *p1, *p2, *p3);

    return 0;
}

