#include <stdio.h>

struct student
{
    int no;
    char name[20];
    float score;
};  // 定义一个结构体

int main()
{
    
    struct student s={4,"s1", 80};
    struct student *ps;  // 定义一个结构体指针变量指向结构体变量
    ps = &s;
    printf("s.no = %d - s.name = %s - s.score = %f\n", (*ps).no, (*ps).name, (*ps).score);
    printf("s.no = %d - s.name = %s - s.score = %f\n", ps->no, ps->name, ps->score);
    
    // 结构体数组指针
    struct student std[] = {{1, "std1", 80},{2, "std2", 90},{3, "std3", 87}}; // 定义一个结构体数组, 并初始化
    struct student *pstd = std; // 定义一个结构体指针变量, 指向结构体数组
    int i, n=sizeof(std)/sizeof(std[0]);
    for(i = 0; i < n; i++)
    {
        printf("指针访问结构体数组(指针名->成员名): std.no=%d std.name = %s  std.score = %f\n", pstd->no, pstd->name, pstd->score);
        printf("指针访问结构体数组(*(指针名).成员名): std.no=%d std.name = %s  std.score = %f\n", (*pstd).no, (*pstd).name, (*pstd).score);
        pstd++;
    }

    
    return 0;
}

