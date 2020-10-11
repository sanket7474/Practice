/*


    Given two nos represented by two lists, create a linked list that returns sum list.
    the sum list is list reprsentation of addition of two input numbers


*/


#include "list.h"
#include<string.h>
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


    int size(let *list) {

        int count = 0;

        while (list) {
            
            count += 1;
            list= list->next;
        }

        return count;
    }
    void match(let *list , int count) {

        for(int i = 0 ; i < count ; i++) 
            add(&list , 0);

    }

    let *addNos(let *list ,let *list2) {

        let *list3 = NULL;
        int carry = 0,sum = 0;

        while(list) {

            sum = list->data+list2->data+carry;
        
            if(sum >= 10) {
                sum = sum%10;
                carry = 1;
            }
            else 
                carry = 0;

            add(&list3 , sum);
            list = list->next;
            list2 = list2->next;
        }
        if(carry) {
            
            add(&list3 , 1);
        }
        return reverse(list3);
    }
    int main() {
        

        let *List1 , *List2 , *List3;
        char num1[100],num2[100];
        int size1 , size2;
        List1 = List2 = List3 = NULL;

        gets(num1);
        gets(num2);
       
        for(int i = 0 ; i < strlen(num1) ; i++)
            add(&List1 , getIntVal(num1[i]));
        
        for(int i = 0 ; i < strlen(num2) ; i++)
            add(&List2 , getIntVal(num2[i]));
        
        size1 = size(List1);
        size2 = size(List2); 
        
        List1 = reverse(List1);
        List2 = reverse(List2);

        if( size1 > size2)
            match(List2 , size1-size2);
        else 
            match(List1 , size2-size1);
        
        disp(&List1);
        disp(&List2);
        printf("\n-----------");
        List3 = addNos(List1, List2);
        disp(&List3);
        return 0;
    }

// 1234
//   23

// 99
    
