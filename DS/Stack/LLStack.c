#include<stdio.h>
#include<stdlib.h>
    struct List {

        int data;
        struct List *next;
    };
    void push(struct List **top , int data) {

        struct List *nn = (struct List *)malloc(sizeof(struct List));
        nn->data = data;
        nn->next = *top;
        *top = nn;
    }
    int isEmpty(struct List *top) {

        return top == NULL;        
    }
    void pop(struct List **top) {

        if(isEmpty(*top)) 
            printf("Stack is Empty!");
        else {
        struct List *temp = *top;
        *top = (*top)->next;
        free(temp);
        }
    }

    void print(struct List *top) {
        printf("\n");
        while(top) {

            printf("| %d |\n",top->data);
            top = top->next;
        }
    }
    int main() {

        struct List *top = NULL;
        int data,n;
        
        while(1) {
        printf("\nEnter Choice:\t");
        scanf("%d",&n);

        if(n) {
            scanf("%d",&data);
            push(&top , data);
            print(top);
        }
        else {
            pop(&top);
            print(top);
        }
    }
        return 0;
    }