// Given a Linked List which is sorted how will you insert an element in a sorted way

#include "list.h"

    void insert(let **list , int data) {

        let *node = (let *)malloc(sizeof(let));
        node->data = data;
        node->next = NULL;

        let *temp = *list;
        if(data < (*list)->data) {

            node->next = *list;
            *list = node;
            return;
        }
        while(temp->next != NULL && temp->next->data < data) 
            temp = temp->next;
        

        node->next = temp->next;
        temp->next = node;

    }

    int main() { 

        let *List = NULL;

        add(&List , 2);
        add(&List , 3);   //temp
                            // node 3
        add(&List , 4);   //temp->next            
        add(&List , 5);
        add(&List , 6);
        //add(&List , 8); node()->
        add(&List , 9);

        // disp(&List);
        // insert(&List , 3);
        // disp(&List);
        insert(&List , 7);
        disp(&List);
        insert(&List , 11);
        disp(&List);
         insert(&List , 1);
        disp(&List);
        return 0;
    }
