

#include<stdio.h>
void printArray(int arr[] , int size) {
        
    printf("\n");
    for(int i = 0 ; i < size ; i++) 
        printf("%d ",arr[i]);
}

int sum(int arr[] , int size) {

    int sum = 0 ;

    for(int i = 0 ; i < size ; i++) 
        sum += arr[i];

    return sum;
}


    void binary(int index , int n , int arr[] , int k , int x[]) {
    

    if(sum(arr,index) == n) {

        printArray(arr,index);
    }

    if(index == n)
        return;

    else {

        for(int i = 0 ; i < k ; i++) {

            arr[index] = x[i];
            binary(index+1,n,arr,k,x);
            
        }
    }
}
    int main() {

        int arr[10];
        int x[] = {1,2};

            binary(0 , 4 , arr , 2 , x);        
        return 0;
    }

    










