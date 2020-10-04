#include "list.h"
    
    int isPalindrome(let *list , let* list2) {

        while(list) {

            if(list->data != list2->data) 
                return 0;

            list = list->next;
            list2 = list2->next;
        }

        return 1;

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

    let *deepCopy(let *list) {

        let *list2 = NULL;

        while(list)   {
             
            add(&list2 , list->data);
            list = list->next;
        }
        return list2;
    }
    int main() {
        

        let *List = NULL;

        add(&List , 1);
        add(&List , 2); 
        add(&List , 3);             
        add(&List , 4);
        add(&List , 3);
        add(&List , 2);
        add(&List , 1);
        
        let *List2 = deepCopy(List);

        List2 = reverse(List2);

        printf("%d",isPalindrome(List,List2));
        
        return 0;
    }