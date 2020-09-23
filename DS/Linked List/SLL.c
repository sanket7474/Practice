#include<stdio.h>
#include<stdlib.h>
    struct Node {

        int data;
        struct Node *next; 
    };


    void change(struct Node **temp) {

        *temp = (*temp)->next;
        
    }

    struct Node * change2(struct Node *temp) {

        temp = temp->next;
        return temp;
    }

    int main() {

       
        struct Node *head = (struct Node*) malloc(sizeof(struct Node));
        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        
        head->data = 10;
        head->next = newNode;
        newNode->data = 20;
        newNode->next = NULL;

        
        change(&head);

        printf("%d", head->data);

        return 0;
    }

