#include "list.h"
    
    let *swap(let *list) {

        let *temp1 = NULL , *temp2 = NULL , *curr = list;

        while(curr && curr->next) {

            if(temp1 != NULL) {

                temp1->next->next = curr->next;
            }   
            temp1 = curr->next;
            curr->next = curr->next->next;
            temp1->next = curr;

            if(temp2 == NULL)
                temp2 = temp1;

            curr = curr->next;
        }
        return temp2;

    }
    
    int main() {
        

        let *List = NULL;

        add(&List , 1);
        add(&List , 2); 
        add(&List , 3);             
        add(&List , 4);
        add(&List , 5);
        add(&List , 6);
        
        List = swap(List);
        disp(&List);
        
        return 0;
    }