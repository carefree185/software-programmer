//
// Created by dyp on 2021/4/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 50

typedef struct {
    int data[MaxSize];
    int front, rear;
}SeqQueue;

void InitQueue(SeqQueue **Q) {
    /**
     * 初始化一个空队列
     */
    *Q = (SeqQueue *) malloc(sizeof(SeqQueue));
    (*Q)->front = (*Q)->rear = -1;
}

void DestroyQueue(SeqQueue **Q) {
    /**
     * 销毁队列
     */
    free(*Q);
    *Q = NULL;
}

bool QueueEmpty(SeqQueue *Q){
    /**
     * 队列是否为空
     */

    return Q->rear == Q->front;
}

bool enQueue(SeqQueue *Q, int e) {
    /**
     * 入队
     */

    if(Q->rear == MaxSize - 1) {  // 队列满
        return false;
    }

    Q->data[++Q->rear] = e;
    return true;
}

bool deQueue(SeqQueue *Q, int *e) {
    /**
     * 出队
     */

    if (Q->front == Q->rear) {
        return false;
    }
    *e = Q->data[++Q->front];
    return true;
}

int main() {
    SeqQueue  *q;
    InitQueue(&q);
    for(int i = 0; i < 10; i++) {
        enQueue(q, i+1);
    }

    for(int i = 0; i < 10; i++) {
        int e=0;
        deQueue(q,&e);
        printf_s("%d ", e);
    }
    printf_s("\n");
    return 0;
}
