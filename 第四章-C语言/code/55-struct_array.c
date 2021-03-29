#include <stdio.h>

struct student
{
    int no;
    char name[20];
    float score;
};  // 定义一个结构体

int main()
{
    struct student std[]={{1,"std1", 80}, {2, "std2", 89}, {3, "std3", 91}};  //定义一个结构体数组并初始化
    for (int i = 0; i < 3; i++)
    {
        printf("std%d.no = %d, std%d.name=%s, std%d.score = %.3f\n", i, (std+i)->no, i, (std+i)->name, i, (std+i)->score);  // 通过结构体数组首地址访问各个元素的成员
        printf("std%d.no = %d, std%d.name=%s, std%d.score = %.3f\n", i, std[i].no, i, std[i].name, i, std[i].score);  // 通过下标访问个元素的成员
    }
    return 0;
}

