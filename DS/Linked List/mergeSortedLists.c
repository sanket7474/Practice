#include "list.h"
    
    let* merge(let *list1 , let *list2) {

        let *list3 = NULL;
        let *temp = NULL;
        while(list1 && list2) {

            if(list1->data < list2->data) { 
                
                if(list3 == NULL) {
                    
                    list3 = list1;
                    temp  = list3;
                }
                else {

                    temp->next = list1;
                    temp = list1;
                }
                list1 = list1->next;
            }
            else {
            
                if(list3 == NULL) {
                    
                    list3 = list2;
                    temp  = list3;
                }
                else {

                    temp->next = list2;
                    temp = list2;
                }
                
                list2 = list2->next;
            }
            
            
        }

        if(list2 == NULL)
            temp->next =  list1;
        else if(list1 == NULL)
            temp->next = list2;    

        return list3;
    }
    
    int main() {
        

        let *List = NULL;
        let *List2 = NULL;
        let *List3 = NULL;
        
        add(&List , 1);
        add(&List , 4); 
        add(&List , 6);             
        add(&List , 10);
        add(&List , 12);
        add(&List , 14);

        add(&List2 , 3);
        add(&List2 , 5); 
        add(&List2 , 7);             
        add(&List2 , 8);
        
        List3 = merge(List , List2);
        disp(&List2);   
        return 0;
    }