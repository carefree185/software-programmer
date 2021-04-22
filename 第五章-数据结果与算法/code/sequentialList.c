//
// Created by dyp on 2021/4/22.
//

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
// 顺序表的定义
typedef struct {
    int data[MaxSize];  // 顺序存放数据
    int length; // 顺序表长度
}SeqList;

void InitList(SeqList **L){
    /**
     * 初始化顺序表，创建空表
     */
    *L = (SeqList *) malloc(sizeof(SeqList));  // 分配空间
    (*L)->length = 0;  // 初始化长度为0
}

void CreateList(SeqList **L, int *a, int n) {
    /**
     * 创建顺序表，并添加初始值
     */

    *L = (SeqList *) malloc(sizeof(SeqList));  // 分配空间

    for (int i = 0; i < n; i++) {
        *((*L)->data + i) = *(a+i);
    }
    (*L)->length = n;
}

void DestroyList(SeqList **L) {
    /**
     * 销毁顺序表
     */
    free(*L);
    *L = NULL;
}

void DispList(SeqList *L) {
    /**
     * 输出顺序表
     */
    for (int i = 0; i < L->length; i++) {
        printf("%d\t", *(L->data+i));
    }
    printf("\n");
}

_Bool ListEmpty(SeqList *L) {
    /**
     * 判断顺序表是否为空
     */
    return L->length == 0;
}

_Bool GetElem(SeqList *L, int i, int *e) {
    /**
     * 求i对应的元素，使用e返回
     */
    if (i < 1 || i > L->length){
        return 0;
    }
    *e = L->data[i-1];
    return 1;
}

int LocateElem(SeqList *L, int e) {
    /**
     * 操作e的位置
     */

    int i = 0;
    while (i < L->length && L->data[i] != e) {
        i++;
    }
    if (i >= L->length){
        return 0;
    }
    return i + 1;
}

_Bool ListInsert(SeqList *L, int i, int e) {
    /**
     * 向顺序表L的索引为i的位置插入e
     */
    int j;
    if(i < 1 || i > L->length + 1|| L->length == MaxSize) {
        return 0;
    }
    i--;
    for(j=L->length; j > i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i] = e;
    L->length++;
    return 1;
}

_Bool ListDelete(SeqList *L, int i, int *e) {
    /**
     * 删除索引为i的元素
     */

    int j;
    if (i < 1 || i > L->length) {
        return 0;
    }
    i--;
    *e = L->data[i];
    for(j=i; j < L->length-1; j++) {
        L->data[j] = L->data[j+1];
    }
    L->length--;
    return 1;

}

int main(){
    int a[]={1,2,3,4,5,6};
    SeqList *L = NULL;

    CreateList(&L, a, sizeof(a)/ sizeof(int));
    DispList(L);
    int e=0;
    GetElem(L, 2, &e);
    printf_s("%d\n",e);
    printf_s("%d\n", LocateElem(L, 3));
    ListInsert(L, 1, 0);
    DispList(L);
    ListDelete(L, 2, &e);
    printf_s("%d\n",e);
    return 0;
}

