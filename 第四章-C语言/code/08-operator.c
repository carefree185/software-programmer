#include <stdio.h>

int main()
{
    int a = 10, b = 15, c;
    //算术运算
    c = a + b;
    printf("c = a + b = %d\n", c);
    c = a - b;
    printf("c = a - b = %d\n", c);
    c = +a;
    printf("c = +a = %d\n", c);
    c = -a;
    printf("c = -a = %d\n", c);
    c = a * b;
    printf("c = a * b = %d\n", c);
    c = b / a;
    printf("c = b / a = %d\n", c);
    c = b % a;
    printf("c = b %% a = %d, a = %d\n", c, a);
    c = a++;
    printf("c = a++, c = %d, a = %d\n",c, a);
    c = ++a;
    printf("c = ++a, c = %d, a = %d\n",c, a);
    c = a--;
    printf("c = a--, c = %d, a = %d\n",c, a);
    c = --a;
    printf("c = --a, c = %d, a = %d\n", c, a);
    
    unsigned char x= 0x17,y = 0xaf, z;
    //位运算符
    z = ~x;  // 按位取反
    printf("z=~x = %#x\n", z);
    z = x & y; // 按位与
    printf("z = x & y = %#x\n", z);
    z = x | y;  // 按位或
    printf("z = x | y = %#x\n", z);
    z = x ^ y; // 按位异或
    printf("z = x ^ y = %#x\n", z);
    z = x << 2; // 左移动2位
    printf("z = x << 2 = %#x\n", z);
    z = x >> 2; // 右移动2位
    printf("z = x >> 2 = %#x\n", z);

    // 三目运算符
    int m = 70, n = 10, o;
    o = x++ > 70 ? m + n : 0;
    printf("o = %d\n", o);
    // 逗号运算符
    int g = 10, h = 12, i=0;
    i = (g += 5, h -= 2, g += h);
    printf("i = %d, g = %d, h = %d\n", i, g, h);    


    return 0;
}

