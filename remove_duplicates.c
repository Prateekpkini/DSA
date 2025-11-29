#include<stdio.h>
void insertionsort(int arr[],int n){
    //i for sorted part and j for unsorted part
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={2,2,8,1};
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
    printf("After removing duplicates\n");
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        int j;
        arr[j]=arr[i];
        j++;
        count++;
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<count;i++){
        printf("%d\t ",arr[i]);
    }
    printf("\n");
    return 0;
}