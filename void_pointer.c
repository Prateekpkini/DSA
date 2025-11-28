#include<stdio.h>
void main(){
    float a=19.23;
    void *p=&a;
    printf("%p\n",p);
    printf("%d\n",*((int*)p));
    printf("%f\n",*((float*)p));
    //return 0;
}