/* Union */
#include<stdio.h>
union rajan
{
  int a;
  float b;
  char c;
};
void main()
{
  union rajan v;
  v.a=12;
  //v.b=1.34;
  v.c='m';

  printf("v=%d\n",v.a);


  //printf("v=%f\n",v.b);


  printf("v=%c",v.c);
}
