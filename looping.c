#include<stdio.h>
int main()
{
    int i,sum=0;
    //Looping statements are for loop,while loop, do-while loop
    for(i=1;i<=10;i++){
        sum=sum+i;
        printf("%d %d\n",i,sum);
    }
    printf("The sum of first 10 numbers is %d\n",sum);
    return 0;
}