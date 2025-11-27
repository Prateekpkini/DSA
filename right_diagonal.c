#include<stdio.h>
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9},sum=0;
    // sum=arr[0][2]+arr[1][1]+arr[2][0];//arr[0][n-1]+arr[i][i]+arr[n-1][0]
    // printf("%d",sum);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum=sum+arr[3-i-1][j];
                printf("%d\n",sum);
            }
        }
    }
    printf("%d\n",sum);
}