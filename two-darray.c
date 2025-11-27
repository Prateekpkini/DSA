#include<stdio.h>
int main()
{
    int m,n,arr[2][2];
    printf("Enter the 2d array size:(m,n)");
    scanf("%d %d",&m,&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}