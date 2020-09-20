
// BackTracking

// Backtracking is improvement of brute force
// 3
// 000
// 010
// 011
// 101
// 110
// 111
#include<stdio.h>
void printArray(int arr[] , int size) {
        
    printf("\n");
    for(int i = 0 ; i < size ; i++) 
        printf("%d ",arr[i]);
}

    void binary(int index , int n , int arr[] , int size) {

    if(index == n)
        printArray(arr,size);

    else {

        arr[index] = 1;
        binary(index+1 , n , arr , size);
        
        arr[index] = 2;
        binary(index+1 , n , arr , size);  

    }

}
    int main() {

        int arr[10];
        binary(0 , 4 , arr , 4);
        return 0;
    }

    