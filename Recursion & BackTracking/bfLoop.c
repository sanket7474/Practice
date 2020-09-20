
#include<stdio.h>


    void binary(int index , int n , int arr[] , int k) {
    
    // if we print here we'll print all length array upto n
    // so try replacing pritArray() fn here & examine the ans. also refer the diagram
    
    if(index == n)
        printArray(arr,index); // if we print here we'll print only n lenght array

    else {

        for(int i = 0 ; i < k ; i++) {

            arr[index] = i;
            binary(index+1,n,arr,k);
            
        }
    }
}
    int main() {

        int arr[10];
        
            binary(0 , 3 , arr , 3 );        
        return 0;
    }

    







