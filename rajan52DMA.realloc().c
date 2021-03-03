/* DMA(dynamic memory allocation),realloc() using malloc() */
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *p;
  p=(int*)malloc(4);
  *p=78;
  printf("%d\n",*p);

  p=(int*)realloc(p,8);
  *(p+1)=56;
  printf("%d\n",*(p+1));
}
