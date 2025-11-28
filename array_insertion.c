#include<stdio.h>
int main(){
    int arr[7]={10,20,30,40,50},n=5,element=5;
    printf("Array before insertion:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    arr[n]=element;
    n=n+1;
    printf("Array after insertion at the end:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    printf("Array before insertion at beginning:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element; 
    printf("Array after insertion at beginning:\n");

    for(int i=0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}