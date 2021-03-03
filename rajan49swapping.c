/* Swapping two numbers */
#include<stdio.h>
 int main()
{
   int x=5,y=6,t;
   printf("x=%d,y=%d\n",x,y);
   /* Swapping */
   t=x;
   x=y;
   y=t;
   printf("x=%d,y=%d",x,y);
}
