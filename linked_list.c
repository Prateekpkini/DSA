#include <stdio.h>
#include <stdlib.h>

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
    } else{
        tail->next = newNode;
        tail = newNode;
    }
    printf("Inserted %d into the linked list\n", value);
}

void insert_beg(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    if (tail == NULL){
        tail = newNode;
    }
    printf("Inserted %d at the beginning of the linked list\n", value);
}

void insert_end(int value){
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
    printf("Inserted %d at the end of the linked list\n", value);
}

void delete_beg(){
    if (head == NULL){
        printf("List is empty — nothing to delete\n");
        return;
    }
    struct Node* temp = head;
    printf("Deleted %d from the beginning of the linked list\n", head->data);
    head = head->next;
    if (head == NULL){
        tail = NULL;
    }
    free(temp);
}

void delete_end(){
    if (head == NULL){
        printf("List is empty — nothing to delete\n");
        return;
    }
    if (head == tail){
        printf("Deleted %d from the end of the linked list\n", head->data);
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }
    struct Node* current = head;
    while (current->next != tail){
        current = current->next;
    }
    printf("Deleted %d from the end of the linked list\n", tail->data);
    free(tail);
    tail = current;
    tail->next = NULL;
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
    display();
    insert_end(30);
    insert_end(40);
    display();
    insert_beg(5);
    display();
    delete_end();
    display();
    delete_beg();
    display();
    delete_end();
    delete_end();
    delete_end();
    display();
    return 0;
}
