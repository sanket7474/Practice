#include <stdio.h>
#include <stdlib.h>
    struct Tree {

        int data;
        struct Tree *left;
        struct Tree *right;
    };

    void insert( struct Tree **T , int data) {

        
        struct Tree *node = NULL;
        node = (struct Tree *)malloc(sizeof(struct Tree));

        node->data = data;
        node->left = node->right = NULL;

        if(*T == NULL) {

            *T = node;
        }
        else if((*T)->left == NULL) {
            (*T)->left = node;
        }
        else if((*T)->right == NULL) {
            (*T)->right = node;
        }
        
    }
    int main() {

        struct Tree *T = NULL;

        // T->left = NULL;
        // T->right = NULL;
        
        insert(&T,1);
        insert(&T,2);
        insert(&T,3);
        insert(&T,4);
        insert(&T,5);
        printf("%d ",T->data);              // 1
        printf("%d ",T->left->data);        // 2
        printf("%d ",T->right->data);       // 3
        printf("%d ",T->left->right->data);  // 5
        return 0;
    }