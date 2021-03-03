
// Takes Something Returns Nothing

#include<stdio.h>
#include<conio.h>
void add(int,int);

void main()
{ int x,y;
  printf("enter two values");
  scanf("%d%d",&x,&y);
  add(x,y);
  getch();
}
void add(int a,int b)
{
  int c;
  c=a+b;
  printf("Sum is %d",c);
}
