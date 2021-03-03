
// Takes Something Returns Something

#include<stdio.h>
#include<conio.h>
int add(int,int);

void main()
{
  int x,y,z;
  printf("enter two number");
  scanf("%d%d",&x,&y);
  z=add(x,y);
  printf("Sum is %d",z);
  getch();
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return(c);
}
