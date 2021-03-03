/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/
#include<stdio.h>
#include<conio.h>
int Even(int);
int Odd(int);

int main()
{
  int n,t,z,a=0,b=0;
  printf("enter how many number you will input");
  scanf("%d",&n);
  printf("enter your numbers");
  for(t=1;t<=n;t++)
     scanf("%d",&z);
  a=a+Even(z);
  printf("%d",a);
  b=b+Odd(z);
  printf("%d",b);
}
int Even(int x)
{
  if(x%2==0)
    return(x);
  else
    return(0);
}

int Odd(int y)
{
   if(y%2==0)
      return(0);
   else
      return(y);
}
