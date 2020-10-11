#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    struct List {

        char data;
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
        
        char inp[100];
        scanf("%s",inp);

        for(int i = 0 ; i < strlen(inp) ; i++) {

            if(inp[i] == '(' || inp[i] == '[' || inp[i] == '{' )
                push(&top , inp[i]);
            else {

                if(inp[i] == '}' && top->data == '{' || inp[i] == ']' && top->data == '[' || inp[i] == ')' && top->data == '(') {

                    pop(&top);
                }
                else {
                    break;
                }
            }
        }
        
        if(isEmpty(top))
            printf("YES");
        else 
            printf("NO");
        return 0;
    }

    