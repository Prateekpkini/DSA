#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    //linear search
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=30,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Element not found\n");
    }
    return 0;
}