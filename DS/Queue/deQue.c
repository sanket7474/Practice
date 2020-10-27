#include<stdio.h>
#include<stdlib.h>

    struct List {

        int data;

        struct List *next;
        struct List *prev;
    };

    struct Queue {

        struct List *front;
        struct List *rear;
    };

    struct Queue *createQueue() {

        struct Queue *temp = (struct Queue *)malloc(sizeof(struct Queue));

        temp->front = temp->rear = NULL;

        return temp;
    }
    void insertFront(struct Queue *Q , int data) {

        struct List *node = (struct List *)malloc(sizeof(struct List));
        node->data = data;
        node->next = NULL;
        node->prev = NULL;

        if(Q->front == NULL) {

            Q->front = Q->rear = node;
        }
        else {

            node->next = Q->front;
            Q->front->prev = node;
            Q->front = node;
        }
    }

    void insertRear(struct Queue *Q , int data) {

        struct List *node = (struct List *)malloc(sizeof(struct List));
        node->data = data;
        node->next = NULL;
        node->prev = NULL;

        if(Q->rear == NULL) {

            Q->front = Q->rear = node;
        }
        else {

            Q->rear->next = node;
            node->prev = Q->rear;
            Q->rear = node;
        }

    }
    int isEmpty(struct Queue *Q) {

        return Q->front == NULL || Q->rear == NULL;
    }
    int deleteFront(struct Queue *Q) {

        if(isEmpty(Q)) {

            printf("\nEmpty!");
        }
        else {

            if(Q->front == Q->rear) {

                struct List *temp = Q->front;
                int data = temp->data;
                Q->front = Q->rear = NULL;

                free(temp);
                return data;
            }
            else {
                
                struct List *temp = Q->front;
                int data = temp->data;
                Q->front = Q->front->next;
                Q->front->prev = NULL; 
                free(temp);
                return data;
            }
            
        }

    }
    int deleteRear(struct Queue *Q) {

        
        if(isEmpty(Q)) {

            printf("\nEmpty!");
        }
        else {
            if(Q->front == Q->rear) {

                struct List *temp = Q->front;
                int data = temp->data;
                Q->front = Q->rear = NULL;

                free(temp);
                return data;
            }
            else {
                
                struct List *temp = Q->rear;
                int data = temp->data;
                Q->rear = Q->rear->prev;
                Q->rear->next = NULL;
                free(temp);
                return  data;
            }
            
        }

    }
    void disp(struct List *list) {

        while(list) {

            printf("%d ",list->data);
            list = list->next;
        }
        printf("\n");
    }
    int main() {

        struct Queue *Q = createQueue();
        int choice,data;
        while(1) {

            scanf("%d",&choice);

            switch(choice) {

                case 1: scanf("%d",&data);
                        insertFront(Q , data);
                        break;
                case 2: data = deleteFront(Q);
                        // printf("%d" , data);
                        break;
                case 3: scanf("%d",&data);
                        insertRear(Q , data);
                        break;
                case 4: data = deleteRear(Q);
                        // printf("%d" , data);

            }

            disp(Q->front);
        }
        
        return 0;
    }