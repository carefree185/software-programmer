#include <stdio.h>

int main()
{
    char ch1[] = {'H', 'e', 'l', 'l', 'o'}; // 一维字符数组逐个元素初始化
    char ch2[7] = " Hello"; // 一维字符数组 字符串形式初始化
    printf("ch1 = %s\t *ch1[4] = %p\n",ch1, &ch1[4]);  // 输出结果: Hello Hello
    printf("ch2 = %s\t *ch2 = %p\n", ch2, ch2);
    if((&ch1[4] + 0x1) == ch2)
    {
        printf("true\n");
    }
    printf("二维字符数组\n");
    char ch3[][7] = {"Apple", "Orange", "Grape", "Pear", "Peach"};
    int n = sizeof(ch3) / sizeof(ch3[1]);
    for (int i = 0; i < n; i++)
    {
        puts(ch3[i]);
    }
    printf("\n");
    
    int m = sizeof(ch3[1])/sizeof(ch3[1][0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            putchar(ch3[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

