// Largest	rectangle	under	histogram

#include<stdio.h>
    
    int maxLenRect(int h[] , int len) { 
      
        int fwd , bckwd,val , max = 0;
        for(int i = 0; i < len; i++) {

            fwd = i+1;
            bckwd = i-1;
            val = h[i];
           
            while( fwd < len && h[fwd] >= h[i]) {

                val = val + h[i];
                fwd++;
            }
            
            while(  bckwd >= 0 &&  h[bckwd] >= h[i]) {

                val = val + h[i];
                bckwd--;
            }

            if(max < val)
                max = val;
        }

        return max;
    }

    int main() {

        int h[] = {3,2,5,6,1,4,4};
        int n = 7;
        printf("\n%d",maxLenRect(h,n));
        return 0;
    }



   