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
  union rajan v;    //rajan is data type
  v.a=12;
  printf("v=%d\n",v.a);

  v.b=1.34;
  printf("v=%f\n",v.b);

  v.c='m';
  printf("v=%c",v.c);
}
