#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50},n,arr1[100];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr1[i]);
    }
    int largest=arr1[0];
    for(int i=1;i<n;i++){
        if(arr1[i]>largest){
            largest=arr1[i];
        }
    }
    printf("Largest number:%d",largest);
}