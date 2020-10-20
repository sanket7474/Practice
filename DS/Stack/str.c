#include<stdio.h>
#include<string.h>

    void rmvAdj(char *s , int len) {

        int top = -1,i = 0;

        while(i < len) {


            if( top == -1 ||  s[top]!= s[i]) {

                top++;

                s[top] = s[i];
                i++;
            }
            else {

                while( i < len && s[top] == s[i])
                    i++;

                top--;
            }
        }
        
        s[top+1] = '\0';
        
    }

    int main() {

        char s[100];

        scanf("%s",s);

        rmvAdj(s , strlen(s));

        printf("%s",s);
    }

    


    