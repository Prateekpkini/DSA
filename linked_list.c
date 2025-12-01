#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* tail = NULL;

void insert(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    printf("Inserted %d into the linked list\n", value);
}       
void display(){
    struct Node* current = head;
    if(current == NULL){
        printf("Linked List is empty\n");
        return;
    }
    printf("Linked List elements:\n");
    while(current != NULL){
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}