#include<stdio.h>
int main()
{
    int a;
    //Conditional
    //if, if-else, nested if, else-if ladder
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("a is even\n");
    }else{
        printf("a is odd\n");
    }
    return 0;
}