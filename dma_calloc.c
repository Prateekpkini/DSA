#include<stdio.h>
#include<stdlib.h>
int *ptr;
int main()
{
    ptr=(int*)calloc(4,sizeof(int));
    printf("Enter the value of element:");
    for(int i=0;i<4;i++){
        scanf("%d",&ptr[i]);   
    }
    for(int i=0;i<4;i++){
        printf(" %d ",ptr[i]);
    }
    free(ptr);
    return 0;     
}