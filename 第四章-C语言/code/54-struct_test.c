#include <stdio.h>
#include <string.h>

struct birthday
{
    int year;
    int month;
    int day;
};

struct student
{
    int num;
    float score;
    char name[20];
    struct birthday age;

}s1 = {1002, 99, "小明", {1996, 12, 24}};

int main()
{
    struct student std;
    std.num = 1001;
    strcpy(std.name, "小小"); 
    std.score = 90;
    std.age.year = 1998;
    std.age.month = 6;
    std.age.day = 23;

    printf("std.name = %s, std.num = %d, std.score = %f std.age=%d-%d-%d\n", std.name, std.num, std.score, std.age.year, std.age.month, std.age.day);
    printf("s1.name = %s, s1.num = %d, s1.score = %f s1.age=%d-%d-%d\n", s1.name, s1.num, s1.score, s1.age.year, s1.age.month, s1.age.day);

    return 0;
}

