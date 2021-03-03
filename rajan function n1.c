
// Takes Nothing Returns Nothing

#include<stdio.h>
#include<conio.h>
void add(void);

void main()
{
  add();
  getch();
}
void add()
{
  int a,b,c;
  printf("enter two number");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("Sum is %d",c);
}
