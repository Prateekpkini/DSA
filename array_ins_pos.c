#include<stdio.h>
int main(){
    int arr[7]={10,20,30,40,50},n=5,element;
    printf("Array before insertion:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the element to insert:"); 
    scanf("%d",&element);
    printf("Enter the position to insert element:");
    int pos;
    scanf("%d",&pos);
    //insertion at given position
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    n=n+1;      
    printf("Array after insertion at the given position:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}