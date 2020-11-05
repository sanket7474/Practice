#include<stdio.h>
#include<stdlib.h>
    struct List {

        struct Tree * data;
        struct List *next;


    };
    struct Queue {

        struct List *front;
        struct List *rear;

    };

    struct Queue *createQueue() {

        struct Queue *temp = (struct Queue *)malloc(sizeof(struct Queue));
        temp->front = NULL;
        temp->rear = NULL;

        return temp;

    }

    void enQ(struct Queue *Q , struct Tree * data) {

        struct List *node = (struct List *)malloc(sizeof(struct List));
        node->data = data;
        node->next = NULL;

        if(Q->rear)
            Q->rear->next = node;
        Q->rear = node;

        if(!Q->front)
            Q->front = node;
    }
    int isEmpty(struct Queue *Q) {

        return Q->front == NULL || Q->rear == NULL;

    }
    struct Tree * deQ(struct Queue *Q) {
        struct Tree * data;
        if(isEmpty(Q)) {

            printf("Queue is Empty!");

        }
        else {

            struct List *temp = Q->front;
            data = Q->front->data;
            Q->front = Q->front->next;
            free(temp);
            return data;
        }
    }