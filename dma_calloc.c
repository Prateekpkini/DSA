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
    ptr=(int*)realloc(ptr,2*sizeof(int));
    printf("\nAfter reallocating memory:\n");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);   
    }
    for(int i=0;i<8;i++){
        printf(" %d ",ptr[i]);
    }   
    free(ptr);
    return 0;     
}