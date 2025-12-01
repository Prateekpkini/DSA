#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* tail = NULL;

void insert_beginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    if (tail == NULL) { // If the list was empty
        tail = newNode;
    }
    printf("Inserted %d at the beginning of the linked list\n", value);
}

void delete(int value) {
    struct Node* current = head;
    struct Node* prev = NULL;

    // If the list is empty
    if (head == NULL) {
        printf("Linked List is empty. Cannot delete.\n");
        return;
    }

    // Case 1: The node to be deleted is the head
    if (current != NULL && current->data == value) {
        head = current->next;
        // If the list becomes empty after deletion
        if (head == NULL) {
            tail = NULL;
        }
        free(current);
        printf("Deleted %d from the linked list\n", value);
        return;
    }

    // Case 2 & 3: The node is in the middle or at the end
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the value was not found in the list
    if (current == NULL) {
        printf("Value %d not found in the linked list\n", value);
        return;
    }

    // Unlink the node from the linked list
    prev->next = current->next;

    // If the deleted node was the tail
    if (current == tail) {
        tail = prev;
    }

    free(current);
    printf("Deleted %d from the linked list\n", value);
}
//Accountno:2999201005001,IFSC:CNRB0002999 
void insert(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    } else{
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
    insert_beginning(5);
    display();
    delete(20);
    display();
    delete(5);
    display();
    delete(30);
    display();
    delete(10);
    display();
    delete(10);
    return 0;
}