#include<stdio.h>
int main()
{
    int age;
    //Conditional
    //if, if-else, nested if, else-if ladder
    printf("Enter the age:\n");
    scanf("%d",&age);
    if(age>=18){
        if(age>=60){
            printf("a is senior citizen\n");
        }
        printf("a is eligible for voting\n");
    }else{
        printf("a is not eligible for voting\n");
    }
    return 0;
}