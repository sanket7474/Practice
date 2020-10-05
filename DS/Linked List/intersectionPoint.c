#include "list.h"
    
    int size(let *list) {

        int count = 0;

        while (list) {
            
            count += 1;
            list= list->next;
        }

        return count;
    }

    let * intersectionPoint(let *list1 , let* list2) {
        int diff;
        int size1 = size(list1);
        int size2 = size(list2);
        int i = 0;
        let *temp1 , *temp2;
            if(size1 > size2) {
                
                diff = size1 - size2;
                
                temp1 = list2;
                temp2 = list1;

                while(i < diff) {
                    temp2 = temp2->next;
                    i++;
                }

            }
            else {

                diff = size2 - size1;
                
                temp1 = list1;
                temp2 = list2;
                
                while(i < diff) {
                    temp2 = temp2->next;
                    i++;
                }
            }

            
            while(temp1) {

                if(temp1 == temp2)
                    return temp2;
                
                temp1 = temp1->next;
                temp2 = temp2->next;
            }

    }
    
    int main() {
        

        let *List = NULL;
        let *List2 = NULL;

        add(&List , 1);
        add(&List , 2); 
        add(&List , 3);             
        add(&List , 4);
        add(&List , 5);
        add(&List , 6);
        add(&List , 7);
        
        add(&List2 , 11);
        add(&List2 , 12);
        add(&List2 , 13);
        add(&List2 , 14);
        add(&List2 , 15);
        add(&List2 , 16);

        
        List2->next->next->next->next->next->next = List->next->next->next->next;

        printf("%d",intersectionPoint(List , List2)->data);
        
        return 0;
    }