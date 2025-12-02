#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* root=NULL;
      
struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}   

void insert(struct Node** node, int value){
    if(*node==NULL){
        *node=createNode(value);
        return;
    }
    if(value<(*node)->data){
        insert(&((*node)->left),value);
    }
    else{
        insert(&((*node)->right),value);
    }
}

void inorderTraversal(struct Node* node){
    if(node==NULL){
        return;
    }
    inorderTraversal(node->left);
    printf("%d ",node->data);
    inorderTraversal(node->right);
}


int main(){
    insert(&root,10);
    insert(&root,5);
    insert(&root,15);
    insert(&root,3);
    insert(&root,7);
    printf("Inorder Traversal of the Binary Search Tree:\n");
    inorderTraversal(root);
    printf("\n");
    return 0;
} 