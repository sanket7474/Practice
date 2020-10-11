#include <stdio.h>


    int main() {

        int arr[] = {6,3,4,5,2};
        int len = 5;
        int span[len];
        int s;
        
        for(int i = 0 ; i < len ; i++) {
            s = 1;
            while( s >= 0 && arr[i-s] < arr[i] ) {
                s++;
            }
            span[i] = s;
        }

        for(int i = 0 ; i < len ; i++)
            printf("%d ",span[i]);

        return 0;
    }