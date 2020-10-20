#include "list.h"
#include<stdlib.h>
    void insertSorted(let **list , int data) {

        let *node = (let*)malloc(sizeof(let));
        node->data = data;
        node->next = NULL;
        if((*list) == NULL) {

            (*list) = node;
        }
        else{

            let *temp = (*list);
            let *temp2 = NULL;

            if(data < (*list)->data) {
                
                node->next = (*list);
                (*list) = node;
                return;

            }

            while(temp && temp->data < data) {
                
                temp2 = temp;
                temp= temp->next;
            }       
            node->next = temp2->next;
            temp2->next = node;
        }
    }

    
    int main() {
        int n,data;
        let *list = NULL;
        scanf("%d",&n);

        while(n--) {

            scanf("%d",&data);
            insertSorted(&list , data);
            disp(&list);         
        }
        return 0;
    }