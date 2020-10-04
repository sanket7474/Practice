// Given a pointer reference to a node to be deleted in SLL how do you delete it

#include "list.h"

    void del(let *list) {
        
        let *temp = list->next;

        list->data = temp->data;
        list->next = temp->next;
        list = list->next;

        free(temp);
        // disp(&list);
        
        
    }
    int main() {

        let *List = NULL;

        add(&List , 1);
        add(&List , 2);   
        add(&List , 3);   //list            
        add(&List , 4);   // temp
        add(&List , 5);
        
        del(List->next->next);
        disp(&List);
        return 0;

    }