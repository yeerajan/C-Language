/* DMA(dynamic memory allocation),malloc() */

#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *p;             //SMA
   p=(int*)malloc(4);
   *p=786;
   printf("%d",*p);
}
