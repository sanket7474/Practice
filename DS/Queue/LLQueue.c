#include<stdio.h>
#include<stdlib.h>
    struct List {

        int data;
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

    void enQ(struct Queue *Q , int data) {

        struct List *node = (struct List *)malloc(sizeof(struct List));
        node->data = data;
        node->next = NULL;

        /*if(!Q->rear) {
            Q->rear = node;
        }
        else {

            Q->rear->next = node;
            Q->rear = node;
        }*/

        if(Q->rear)
            Q->rear->next = node;
        Q->rear = node;

        if(!Q->front)
            Q->front = node;
    }
    int isEmpty(struct Queue *Q) {

        return Q->front == NULL;

    }
    int deQ(struct Queue *Q) {

        if(isEmpty(Q)) {

            printf("Queue is Empty!");

        }
        else {

            struct List *temp = Q->front;
            Q->front = Q->front->next;
            free(temp);
        }
    }
    void print(struct List *list) {

        printf("\n");
        while(list) {
            
            printf("%d->",list->data);
            list = list->next;
        }
    }
    int main() {

        struct Queue *Q = createQueue();
        int n,data;
        while(1) {
        printf("\nEnter Choice:\t");
        scanf("%d",&n);

        if(n) {
            scanf("%d",&data);
            enQ(Q,data);
            print(Q->front);
        }
       else {
            deQ(Q);
            print(Q->front);
        }
        }

        // print(Q->front);
        return 0;
    }