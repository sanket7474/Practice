// middle node 

#include"list.h"

 let* middleNode(let *list) {
    let *slowPtr , *fastPtr;
    slowPtr = list;
    fastPtr = list;     
    
    while(fastPtr != NULL && fastPtr->next != NULL) {

        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}

    void isEvenOdd(let *list) {

        let * fastPtr = list;    
        
        while(fastPtr != NULL && fastPtr->next != NULL) 
            fastPtr = fastPtr->next->next;


        if(fastPtr != NULL) 
            printf("ODD");
        else 
            printf("EVEN");

    }


    int main() {

        let *List = NULL;
        let *midNode;
        add(&List , 1); //
        add(&List , 2); //
        add(&List , 3); //
        add(&List , 4); //
        add(&List , 5); //
        add(&List , 6); //
        add(&List , 7); //
        add(&List , 8); //
        add(&List , 9); //
        add(&List , 10);//
        add(&List , 11);//
        // NULL
        disp(&List);

        // midNode = middleNode(List);
        isEvenOdd(List);
        // printf("\n%d",midNode->data);
    }