#include<stdio.h>
main()
{
   int x,y,z,w,a,b;
   printf("enter value of x,y,z,w,a");
   scanf("%d%d%d%d%d",&x,&y,&z,&w,&a);
   b=x+y-z/w*a;
   printf("answer is %d",b);
}
