/* Pre-Processor Command in C Language,#define,defining macro like a function */
#include<stdio.h>
#define PRODUCT(a,b) a*b
void main()
{
   int x,y;
   printf("enter two numbers");
   scanf("%d%d",&x,&y);
   printf("product of two numbers is %d",PRODUCT(x,y));
}
