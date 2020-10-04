// 1->2->3->4->5->6->null
// 2->1->4->3->6->5->null

// 1->2->3->4->5->null
// 2->1->4->3->5->null

// 1->null
// 1->null


#include "list.h"
    
    void swap(let *list) {
        int t = 0;
        while(list && list->next) {

            t = list->data;
            list->data = list->next->data;
            list->next->data = t;

            list = list->next->next;
        }

    }
    
    int main() {
        

        let *List = NULL;

        add(&List , 1);
        add(&List , 2); 
        add(&List , 3);             
        add(&List , 4);
        add(&List , 5);
        // add(&List , 6);
        
        swap(List);
        
        disp(&List);
        
        return 0;
    }