#include "list.h"

    void genLoop(let *list) {

        let *third = list->next->next;
        let *temp = list;

        while(temp->next != NULL) 
            temp = temp->next;
        
        temp->next = third;
    }

    int hasLoop(let *list) {


    let *slowPtr , *fastPtr;
    slowPtr = list;
    fastPtr = list;     
    
    while(fastPtr != NULL && fastPtr->next != NULL) {

        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if(slowPtr == fastPtr) {
            slowPtr = list;
        
        while(slowPtr != fastPtr) {

            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }

        printf("%d" , slowPtr->data);

        return 1;
        }

    }

    return 0;
    }

    int main() {

        let *List = NULL;

        add(&List , 1);
        add(&List , 2);
        add(&List , 3);
        add(&List , 4);
        add(&List , 5);
        add(&List , 6);
        add(&List , 7);
        add(&List , 8);

        genLoop(List);
        // disp(&List);
        
        printf("\n%d",hasLoop(List));
        return 0;
    }