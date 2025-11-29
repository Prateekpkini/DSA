#include<stdio.h>
void insertionsort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
   
    }
}

int main(){
    int arr[]={12,11,13,5,6};
    printf("Unsorted Sorted array: \n");
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    insertionsort(arr,n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}