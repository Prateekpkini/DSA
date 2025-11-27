#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,arr[10];
    printf("Enter the subject marks(Maths,4 credits) :");
    scanf("%d\n",&sub1);
    printf("Enter the subject marks(Physics,3 credits) :");
    scanf("%d\n",&sub2);
    printf("Enter the subject marks(PPC ,3 credits) :");
    scanf("%d\n",&sub3);
    printf("Enter the subject marks(IME, 3 credits) :");
    scanf("%d\n",&sub4);
    printf("Enter the subject marks(IoT , 3 credits) :");
    scanf("%d\n",&sub5);
    printf("Enter the subject marks(English , 1 credit) :");
    scanf("%d\n",&sub6);
    printf("Enter the subject marks(SFH , 1 credit) :");
    scanf("%d\n",&sub7);
    printf("Enter the subject marks(Constitution, 1 credit) :");
    scanf("%d\n",&sub8);
    arr[10]={sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8};
    for(int i=0;i<8;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}