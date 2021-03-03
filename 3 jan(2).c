//Structure in C
#include<stdio.h>
#include<conio.h>
struct book
{
    int id;
    char title[20];
    float price;
};
struct book input(void);
void display(struct book);
int main()
{
    struct book b;
    b=input();
    display(b);
}

struct book input()
{
    struct book b1;
    printf("enter book id, title and price");
    scanf("%d",&b1.id);
    //fflush();
    gets(b1.title);
    scanf("%f",&b1.price);
    return b1;
}
void display(struct book b)
{
    printf("\n%d\n",b.id);
    printf("%s",b.title);
    printf("%f",b.price);
}






