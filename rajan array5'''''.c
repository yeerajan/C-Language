/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/
#include<stdio.h>
#include<conio.h>
int Even(int);
int Odd(int);

int main()
{
  int n,t,z[n],EvenSum=0,OddSum=0,u;
  printf("enter how many number you will input");
  scanf("%d",&n);
  u=n-1;
  printf("enter your numbers");
  for(t=0;t<=u;t++)
	 scanf("%d",&z[t]);
  for(t=0;t<=u;t++)
     EvenSum=EvenSum+Even(z[t]);
  printf("%d",EvenSum);
  for(t=0;t<=u;t++)
     OddSum=OddSum+Odd(z[t]);
  printf("%d",OddSum);
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
