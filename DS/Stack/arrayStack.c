// Simple	array	based	implementation

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

struct ArrayStack {

    int top;
    int cap;// optional
    int *arr;
}s;

    void createStack() {

        s.cap = MAXSIZE;
        s.arr = (int *)malloc(s.cap * sizeof(int));
        s.top = -1;      

    }

    int isFull() {

        return s.top==s.cap-1;
    }
    int isEmpty() {

        return s.top==-1;
    }
    void push(int data) {
        if(isFull()) {

            printf("Stack Overflow");
        }
        else 
        s.arr[++s.top] = data;
    }

    int pop() {

        if(isEmpty())
            printf("Stack Enmty!");
        else {
            int data = s.arr[s.top];
            s.top--;
            return data;
        }
    }
    void print() {

        printf("\n");

        for(int i = s.top ; i >= 0  ; i--)
            printf("| %d |\n",s.arr[i]);

    }
int main() {

    int n, data;
    createStack();
    while(1) {
        printf("\nEnter Choice:\t");
        scanf("%d",&n);

        if(n) {
            scanf("%d",&data);
            push(data);
            print();
        }
        else {
            pop();
            print();
        }
    }


    return 0;
}