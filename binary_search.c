#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    //binary search
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=30,flag=0,low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Element found at index %d\n",mid);
            flag=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==0){
        printf("Element not found\n");
    }  
    
    return 0;
}