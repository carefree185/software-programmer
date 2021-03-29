#include <stdio.h>

int main()
{
    void *p = NULL;  // 定义一个voide *指针
    int a = 10;
    p = (void *)&a;  // 将变量a的地址赋值给p. 赋值是, 要将a的地址强制转换为void * 类型
    *(int *)p = 100;  // 要对p指向的内存空间进行操作时, 要将指针p转化它的目标数据类型为相应的类型.
    printf("%d\n", a);
    return 0;
}

