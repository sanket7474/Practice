// 245 + 1 = 2->4->6 

#include "list.h"
#include <string.h>    
    int getIntVal(char c) {


        switch(c) {

            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;

        }
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

    let * addOne(let* list) {

        int carry = 1;
        list = reverse(list);
        let *temp = list;
        while(temp) {

            temp->data = temp->data + carry;

            if(temp->data == 10) {
                carry = 1;
                temp->data = 0;
            }
            else {
                carry = 0;
            }
            
            temp = temp->next;
        }
        if(carry) 
            add(&list , 1);
   
        return reverse(list);
    }
    int main() {
        

        let *List = NULL;

        char num[100];
        gets(num);

        for(int i = 0 ; i < strlen(num) ; i++) 
            add(&List , getIntVal(num[i]));
        
        List = addOne(List);
        disp(&List);
        
        return 0;
    }

    //99
    //100