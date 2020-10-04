#include<stdio.h>
#include<stdlib.h>
    
    #define let struct Node

    struct Node {

        int data;
        struct Node *next; 
    };

    void addFirst(let **list , int data) {

        let *node;

        node = (let*)malloc(sizeof(let));
        node->next = NULL;
        node->data = data;

        *list = node;

       
        
    }

    void add(let **list , int data) {

        let *temp = *list;
        let *node;

        node = (let*)malloc(sizeof(let));
        node->next = NULL;
        node->data = data;

        if(*list == NULL) 
            addFirst(list , data);
        else {

            while(temp->next != NULL) 
                temp = temp->next;

            temp->next = node;            
        }


    }

    void disp(let **list) {

        printf("\n");
        
        let *temp = *list;

        while(temp != NULL) {

            printf("%d->",temp->data);

            temp = temp->next;
        }
        
    }