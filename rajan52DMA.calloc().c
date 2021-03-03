/* DMA(dynamic memory allocation),calloc() */

#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *p,i;
   p=(int*)calloc(10,4);
   *p=5;
   *(p+1)=3;
   *(p+2)=7;
   *(p+3)=2;
   for(i=0;i<=9;i++)
    printf("%d ",*(p+i));
}
