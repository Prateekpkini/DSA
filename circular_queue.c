#include<stdio.h>
#define MAX 5
int circular_queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int value){
    if((rear+1)%MAX==front){
        printf("Circular Queue is full\n");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%MAX;
        circular_queue[rear]=value;
        printf("Added %d to circular queue\n",value);
    }
}
void dequeue(){
    if(front==-1){
        printf("Circular Queue is empty\n");
    }
    else{
        printf("Deleted %d from circular queue\n",circular_queue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%MAX;
        }
    }
}
void display(){
    if(front==-1){
        printf("Circular Queue is empty\n");
    }
    else{
        printf("Circular Queue elements:\n");
        int i=front;
        while(1){
            printf("%d\t",circular_queue[i]);
            if(i==rear){
                break;
            }
            i=(i+1)%MAX;
        }       
    }
    printf("\n");
}
    
void peek(){
    if(front==-1){
        printf("Circular Queue is empty\n");
    }
    else{
        printf("Front element is %d\n",circular_queue[front]);
    }       
}
int main(){
    enqueue(11);
    enqueue(23);
    enqueue(35);
    enqueue(46);
    enqueue(50);
    display();
    peek();
    dequeue();
    display();
    enqueue(67);
    display();
    return 0;
}