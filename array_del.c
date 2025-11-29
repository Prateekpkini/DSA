#include<stdio.h>
int main(){
    int arr[7]={10,20,30,40,50},n=5;
    printf("Array before deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the position to delete element:");
    int pos;
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;      
    printf("Array after deletion at the given position:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}