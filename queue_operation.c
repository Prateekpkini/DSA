#include<stdio.h>
#define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int value){
    if(rear==MAX-1){
        printf("Queue is full\n");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("Added %d to queue\n",value);
    }
}
void dequeue(){
    if(front==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted %d from queue\n",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements:\n");
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}
void peek(){
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Front element is %d\n",queue[front]);
    }
}
int main(){
    enqueue(100);
    enqueue(205);
    enqueue(304);
    display();
    peek();
    dequeue();
    display();
    return 0;
}