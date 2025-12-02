#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
struct Node* tail=NULL;
void insert(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}
void insert_beg(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
    if(tail==NULL){
        tail=newNode;
    }
}
void insert_end(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=tail;
    if(tail!=NULL){
        tail->next=newNode;
    }
    tail=newNode;
    if(head==NULL){
        head=newNode;
    }
}


void display(){
    struct Node* current=head;
    if(current==NULL){
        printf("Linked List is empty\n");
        return;
    }
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert_beg(5);
    insert_end(40);
    display();
    return 0;
}