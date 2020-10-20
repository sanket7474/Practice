#include<stdio.h>
#include<stdlib.h>

#define MAX 5
    struct arrayQ {

        int front;
        int rear;
        int cap;  // optional

        int *arr;
    };
    int isFull(struct arrayQ* Q) {

        return Q->rear == Q->cap-1;
    }
    int isEmpty(struct arrayQ *Q) {

        return Q->front > Q->rear || Q->rear == -1;
    }
    struct arrayQ* createQueue() {

        struct arrayQ *temp = (struct arrayQ *)malloc(sizeof(struct arrayQ));

        temp->front = temp->rear = -1;
        temp->cap = MAX;

        temp->arr = (int *)malloc(temp->cap * sizeof(int));

        return temp;
    }

    void enQ(struct arrayQ *Q , int data) {

        if(isFull(Q)) {

            printf("Full!");
        }
        else {
            
            Q->rear += 1;

            Q->arr[Q->rear] = data;

            if(Q->front == -1)
                Q->front = Q->rear;
        }
    }

    int deQ(struct arrayQ* Q) {

        if(isEmpty(Q)) {

            printf("Empty!");
        }
        else {
            
            int temp = Q->arr[Q->front];

            Q->front += 1;

            return temp;
        }
    }

    void disp(struct arrayQ* Q) {

        printf("\n");
        for(int i = Q->front; i <= Q->rear; i++)
            printf("%d ",Q->arr[i]);
    }
    int main() {

        struct arrayQ *Q = createQueue();
        int n,data;

        while(1) {
        printf("\nEnter Choice:\t");
        scanf("%d",&n);

        if(n) {
            scanf("%d",&data);
            enQ(Q,data);
            disp(Q);
        }
        else {
            deQ(Q);
            disp(Q);
        }
        }
        return 0;
    }