//
// Created by dyp on 2021/4/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 50

typedef struct  {
    int date[MaxSize];
    int top;
}SeqStack;

void InitStack(SeqStack **S) {
    /**
     * 初始化空栈
     */

    *S = (SeqStack *) malloc(sizeof(SeqStack));
    (*S)->top = -1;
}

void DestroyStack(SeqStack **S) {
    /**
     * 销毁栈
     */

    free(*S);
    *S = NULL;
}

bool StackEmpty(SeqStack *S) {
    /**
     * 判断栈空
     */

    return S->top == -1;
}

bool Push(SeqStack *S, int e) {
    /**
     * 入栈操作
     */

    if (S->top == MaxSize - 1) {
        return false;
    }
    S->date[++S->top] = e;
    return true;
}


bool Pop(SeqStack *S, int *e) {
    /**
     * 出栈操作
     */

    if (S->top == -1) return false;

    *e = S->date[S->top--];
    return true;
}

bool GetTop(SeqStack *S, int *e) {
    /**
     * 取出栈顶元素
     */

    if (S->top == -1) {
        return false;
    }
    *e = S->date[S->top];
    return true;
}

int main() {
    SeqStack  *S=NULL;
    InitStack(&S);
    for (int i = 0; i < 10; i++) {
        Push(S, i+1);
    }
    for (int i = 0; i < 10; i++) {
        int e = 0;
        Pop(S, &e);
        printf_s("%d ", e);
    }
    printf_s("\n");
}





