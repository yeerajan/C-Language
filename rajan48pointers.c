//  Pointers
#include<stdio.h>
int main()
{
  int x=5,*j;
  j=&x;
  printf("%d\n",x);
  printf("%d\n",&x);
  //printf("%d",*x);  //this will give error
  //printf("%d",&*x); //this will give error
  printf("%d\n",*&x);
  printf("%u\n",j);
  printf("%u\n",&j);
  printf("%d\n",*&j);
  printf("%d\n",*j);
  printf("%d",&*j);
}
