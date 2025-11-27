#include<stdio.h>
int main(){
    int arr[5]={1,1,2,3,3},count[100];
    // for(int i=0;i<5;i++){
    //     for(int count=0;count<5;count++){
    //         if(arr[i]==arr[i+1]){
    //             count=count+1;
    //     }
    //     printf("%d\n",arr[i]);
    //     printf("%d\n",count)
    for(int i=0;i<5;i++){
        count[i]=0;
    }
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i-1]){
            count[i]=count[i]+1;
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        printf("%d\t",count[i]);
    }
    printf("\n");
    return 0;
}