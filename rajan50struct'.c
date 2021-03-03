/* write a program to store bookid,title,price */
/* structure */

#include<stdio.h>
struct book
{
  int a;       //a=bookid
  char b[20];  //b=title
  float c;     //c=price
};

//struct book input(void);
//void display(struct book);

void display(struct book v)
{
   printf("\n%d %s %f",v.a,v.b,v.c);
}

struct book input()
{
  struct book v;
  printf("enter bookid,title and price");
  scanf("%d",&v.a);
  {fflush(stdin);
   gets(v.b);         //either of two can be used
   //scanf("%s",v.b);
  }
  //fflush(stdin);    //optional,depends on you
  scanf("%f",&v.c);

  return(v);
}

void main()
{
   struct book k;
   k=input();
   display(k);
}
