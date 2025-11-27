#include<stdio.h>
int main()
{
    int i,sum=0;
    //Looping statements are for loop,while loop, do-while loop
    while(i<=10){
        sum=sum+i;
        printf("%d %d\n",i,sum);
    }
    printf("The sum of first 10 numbers is %d\n",sum);
    return 0;
}