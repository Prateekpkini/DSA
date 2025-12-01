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

void delete(){
    if (head == NULL){
        printf("List is empty — nothing to delete\n");
        return;
    }
    if (head == tail){
        printf("Deleted %d from the linked list\n", head->data);
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }
    struct Node* current = head;
    while (current->next != tail){
        current = current->next;
    }
    printf("Deleted %d from the linked list\n", tail->data);
    free(tail);
    tail = current;
    tail->next = NULL;
}

// void free_list(){
//     struct Node* cur = head;
//     while(cur != NULL){
//         struct Node* next = cur->next;
//         free(cur);
//         cur = next;
//     }
//     head = tail = NULL;
// }

int main(){
    insert(10);
    insert(20);
    display();
    insert_end(30);
    insert_end(40);
    display();

    insert_beg(5);
    display();
    delete();
    display();
    display();
    delete();
    delete();
    delete();
    delete();
    display();
    return 0;
}
