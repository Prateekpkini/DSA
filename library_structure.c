#include<stdio.h>
struct library
{
    char Book_name[100];
    int book_price;
    int year;
};
int main(){
    struct library s1={"Harry Potter",76690,2005};
    // s1.Book_name[100]="Harry Potter";
    // s1.book_price=76690;
    // s1.year=2005;
    printf("%s\n",s1.Book_name);
    printf("%d\n",s1.book_price);
    printf("%d\n",s1.year);
    return 0;
}