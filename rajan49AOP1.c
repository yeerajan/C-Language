/* Pointer and Array */
#include<stdio.h>
int main()
{
  int i,a[5],*p;
  printf("enter five numbers");
  /*
  for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
  for(i=0;i<=4;i++)
    printf("%d\n",a[i]);
  */
  p=a;   // a=&a[0]
  for(i=0;i<=4;i++)
    scanf("%d",(p+i));   // p+i=&a[i]
  for(i=0;i<=4;i++)
    printf("%d ",*(p+i));
}
