#include<stdio.h>
int main(){
    int a=19;
    int *p=&a;
    int* *n=&p;
    int** *m=&n;
    int** *i=&p;
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",*(*n));
    printf("%p\n",n);
    printf("%d\n",*(*(*m)));
    printf("%p\n",m);
    printf("%p\n",i);
    return 0;
}