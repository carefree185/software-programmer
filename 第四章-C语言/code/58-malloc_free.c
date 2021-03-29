#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student
{
    int no;
    char name[20];
    float score;
}Stu;

Stu * get_std()
{
    Stu * s;

    if((s=(Stu *)malloc(sizeof(Stu)))==NULL)
    {
        printf("内存申请失败\n");
        return  NULL;
    }
    s->no = 10;
    strcpy(s->name, "小明");
    s->score = 87;
    return s;
}

int main()
{
    Stu *p;
    if ((p=get_std())==NULL){
        goto END;
    } 
    else
    {
        printf("student info: %d-%s-%.2f\n", p->no, p->name, p->score);
        free(p);
    }
END:
    return 0;
}

