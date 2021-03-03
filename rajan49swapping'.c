/* Swapping by function */

#include<stdio.h>
void swap(int,int);
int main()
{
  int x,y;
  printf("enter two numbers");
  scanf("%d%d",&x,&y);
  swap(x,y);
}

void swap(int a,int b)
{
   int t;
   t=a;
   a=b;
   b=t;
   printf("x=%d,y=%d",a,b);
}
