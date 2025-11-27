#include<stdio.h>
int main(){
    int arr[100],n,target;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("Indices are:%d,%d\n",i,j);
            }
        }
    }
    return 0;
}