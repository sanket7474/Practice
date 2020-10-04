
#include "list.h"

    void dispRev(let *list) {

        if(list == NULL)
            return;
        
        dispRev(list->next);
        printf("%d->",list->data);
    }

    let *reverse(let *list) {

        let* temp = list;
        let *prev = NULL;
        let *next = NULL;

        while(temp != NULL) {

            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;

        }
        return prev;
    }

    
    int main() {

        let *List = NULL;
        
        // let *revList = NULL;
        add(&List ,1);
        add(&List ,2);
        add(&List ,3);
        add(&List ,4);
        add(&List ,5);
        add(&List ,6);

        List = reverse(List);
        disp(&List);
        
        return 0;
    }
    