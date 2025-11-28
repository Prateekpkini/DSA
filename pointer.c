#include<stdio.h>
int main(){
    int a=19;
    int *p=&a;
    int* *n=&p;
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",*(*n));
    printf("%p\n",n);
    return 0;
}