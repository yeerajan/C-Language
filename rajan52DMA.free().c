/* DMA(dynamic memory allocation),malloc(),free() */

#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *p;             //SMA
   p=(int*)malloc(4);
   *p=76;
   printf("%d",*p);

   free(p);
}
