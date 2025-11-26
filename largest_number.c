#include<stdio.h>
int main()
{
    int a,b,c;
    //Largest of 3 numbers using if else ladder
    printf("Enter the 3 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the largest number",a);
    }else if (b>c){
        printf("%d is the largest number",b);
    }else{
        printf("%d is the largest number",c);
    }
    return 0;
}