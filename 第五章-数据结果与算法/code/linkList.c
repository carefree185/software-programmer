//
// Created by dyp on 2021/4/22.
//

#include <stdio.h>
#include <stdlib.h>

typedef _Bool bool;
// 单链表定义
typedef struct LNode {
    int data;
    struct LNode * next;
}LinkNode;

// 头插法创建链表
void CreateListF(LinkNode **L, int *a, int n) {
    /**
     * 头插法创建链表
     */

    LinkNode  * s;
    *L = (LinkNode *) malloc(sizeof(LinkNode));
    (*L)->next = NULL;
    for (int i = 0; i < n; i++) {
        s = (LinkNode *) malloc(sizeof(LinkNode));
        s->data = *(a+i);
        s->next = (*L)->next;
        (*L)->next =s;
    }
}

// 尾插法创建链表
void CreateListR(LinkNode **L, int *a, int n) {
    /**
     * 尾插法创建链表
     */

    LinkNode *s,*r;
    *L = (LinkNode *) malloc(sizeof(LinkNode));
    r = *L;
    for(int i = 0; i < n; i++) {
        s = (LinkNode *) malloc(sizeof(LinkNode));
        s->data= *(a + i);
        r->next = s;
        r = s;
    }
    r->next = NULL;
}

void InitList(LinkNode **L) {
    /**
     * 初始化空链表
     */

    *L = (LinkNode *) malloc(sizeof(LinkNode));
    (*L)->next = NULL;
}

void DestroyLink(LinkNode *L) {
    /**
     * 销毁链表
     */

    LinkNode  *pre = L, *p;
    p = L->next;

    while (p) {
        free(pre);
        pre = p;
        p = pre->next;
    }
    free(pre);
}

_Bool ListEmpty(LinkNode *L) {
    /**
     * 判断链表是否为空
     */

    return L->next == NULL;
}

int ListLength(LinkNode *L) {
    /**
     * 求链表的长度
     */

    int n = 0;
    LinkNode  *p = L;
    while (p->next !=NULL) {
        n++;
        p = p->next;
    }
    return n;
}

void DispList(LinkNode *L) {
    /**
     * 输出链表数据
     */

    LinkNode  * p = L->next;


    while (p) {
        printf_s("%d ", p->data);
        p = p->next;
    }
    printf_s("\n");
}

_Bool GetElem(LinkNode *L, int i, int *e) {
    /**
     * 获取索引为i的元素
     */

    int j = 0;
    LinkNode *p = L;
    if (i < 0) {
        return 0;
    }
    while(j < i && p!=NULL) {
        j++;
        p = p->next;
    }
    if (p == NULL) {
        return 0;
    }
     *e = p->data;
    return 1;
}

int LocateElem(LinkNode *L, int e) {
    /**
     * 获取元素e在链表中的索引
     */

    int i = 1;
    LinkNode  *p = L->next;
    while(p != NULL && p->data != e) {
        p = p->next;
        i++;
    }
    if (p == NULL) {
        return 0;
    }
    return i;
}

_Bool ListInsert(LinkNode *L, int i, int e) {
    /**
     * 向链表L中的索引为i的位置插入元素e
     */

    int j = 0;
    LinkNode  *p = L, *s;
    if(i < 0) return 0;
    while (j++ < i - 1 && p!=NULL) {
        p = p->next;
    }
    if (p == NULL) {
        return 0;
    }

    s = (LinkNode *) malloc(sizeof(LinkNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return 1;
}

_Bool ListDelete(LinkNode *L, int i,int *e) {
    /**
     * 删除链表中索引为i的元素，并是哟e返回
     */

    int j = 0;
    LinkNode  *p = L, *q;
    if (i <= 0) return 0;
    while (j++ < i - 1 && p != NULL) {
        p = p->next;
    }
    if (p == NULL) {
        return 0;
    }
    q = p->next;
    if(q == NULL) {
        return 0;
    }
    *e = q->data;
    p->next = q->next;
    free(q);
    return 1;
}


int main() {
    LinkNode *L;
    int a[] = {1,2,3,4,5,6};
    CreateListF(&L, a, sizeof(a)/sizeof(int));
    DispList(L);
    ListInsert(L, 1, 20);
    DispList(L);
    int i = LocateElem(L, 20);
    printf_s("%d\n", i);
    int e = 0;
    ListDelete(L, 1, &e);
    printf_s("%d\n", e);
}


