/* Pre-Processor Command in C Language,#define,defining macro like a function */
#include<stdio.h>
#define SUM(a,b) a+b
void main()
{
   int x,y;
   printf("enter two numbers");
   scanf("%d%d",&x,&y);
   printf("sum of two number is %d",SUM(x,y));
}
