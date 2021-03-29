#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    const int * p1 = &a; // 修饰*，指针指向内存区域不能修改，指针指向可以变
    p1 = &b; // 成功执行
    //  *p1 = b; // 执行不会成功, 不能修改指针指向的值. 
    printf("a = %d *p1 = %d\n",a, *p1);
    
    int * const p2 = &b; // 修饰p1，指针指向不能变，指针指向的内存可以修改
    // p2 = &a; // 执行出错.
	*p2 = 222; // 执行成功
    printf("%d\n", b);
    return 0;
}

