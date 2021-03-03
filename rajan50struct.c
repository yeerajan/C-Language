/* write a program to store bookid,title,price */
/* structure */

#include<stdio.h>

struct book     //data type declaration will always at top
{
  int a;       //a=bookid
  char b[20];  //b=title
  float c;     //c=price
};

struct book input();        //function declaration,globally
void display(struct book);  //function declaration,globally

void display(struct book v)
{
   printf("\n%d,%s,%f",v.a,v.b,v.c);
}

struct book input()
{
  struct book v;
  printf("enter bookid");
  scanf("%d",&v.a);

   printf("enter title");
  {fflush(stdin);
   gets(v.b);

   //scanf("%s",v.b);       //either of three can be used
   //scanf("%s",&v.b[0]);
  }

   printf("enter price");
   /*fflush(stdin);*/   //may be used,it's optional
   scanf("%f",&v.c);

   return(v);
}

void main()
{
   struct book k;
   k=input();
   display(k);
}
