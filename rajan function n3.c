
// Takes Nothing Returns Something

#include<stdio.h>
#include<conio.h>
int add(void);

void main()
{
  int x;
  x=add();
  printf("Sum is %d",x);
  getch();
}
int add()
{
  int a,b,c;
  printf("enter two number");
  scanf("%d%d",&a,&b);
  c=a+b;
  return(c);
}
