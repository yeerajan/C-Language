/* Pre-Processor Command in C Language,#define */
#include<stdio.h>
#define PI 3.14
void main()
{
  int r;
  float a;
  printf("enter radius");
  scanf("%d",&r);
  a=PI*r*r;
  printf("area a=%f",a);
}
