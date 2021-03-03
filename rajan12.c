#include<stdio.h>
main()
{
   int x,a,b;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   x=a>b?a:b;
   printf("greater number is %d",x);
}
