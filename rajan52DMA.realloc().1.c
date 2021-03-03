/* DMA(dynamic memory allocation),realloc() using calloc() */
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *p,i;
   p=(int*)calloc(5,4);
   *p=23;
   *(p+1)=7;
   *(p+2)=14;
   //*(p+3)=9;
   //*(p+4)=5;

   p=(int*)realloc(p,40);
   *(p+5)=1;
   *(p+6)=2;
   *(p+7)=5;
   for(i=0;i<=9;i++)
     printf("%d  ",*(p+i));
}
