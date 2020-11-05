#include "Queue.h"
    struct Tree {

        int data;
        struct Tree *left;
        struct Tree *right;
    };
    
    struct Tree * createNode(int data) {

        struct Tree *node = NULL;
        node = (struct Tree *)malloc(sizeof(struct Tree));

        node->data = data;
        node->left = NULL;
        node->right = NULL;

        return node;
    }
    void insert( struct Tree **T , int data) {

         struct Tree *temp = *T;
        struct Tree *node = NULL;
        node = (struct Tree *)malloc(sizeof(struct Tree));

        node->data = data;
        node->left = node->right = NULL;

        
    }
    void disp(struct Tree *T) {
            
            if(T != NULL) {
                
                // printf("%d ",T->data);
                disp(T->left);
                printf("%d ",T->data);
                disp(T->right);
                // printf("%d ",T->data);
            }
        }

    void levelOrder(struct Tree *T) {

        struct Queue *Q = createQueue();
        struct Tree *node;
        enQ(Q,T);


         while(!isEmpty(Q)) {

            node = deQ(Q);
            printf("%d ",node->data);
            if(node->left)
                enQ(Q,node->left);
            if(node->right)
                enQ(Q,node->right);
           
        }
    }
    int main() {

        struct Tree *T = NULL;

        // T->left = NULL;
        // T->right = NULL;
        
        T = createNode(1);
        T->left = createNode(2);
        T->right = createNode(3);
        T->left->left = createNode(4);
        T->left->right = createNode(5);
        T->right->left = createNode(6);
        T->right->right = createNode(7);
        printf("\n Level order\n");
        levelOrder(T);
     
        // disp(T);
        // printf("%d ",T->data);              // 1
        // printf("%d ",T->right->left->data);        // 2
        // printf("%d ",T->right->data);       // 3
        // printf("%d ",T->left->left->left->data);  // 4
        return 0;
    }