#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value){
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top]=value;
        printf("Pushed %d to stack\n",value);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Popped %d from stack\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
void peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element is %d\n",stack[top]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    return 0;
}