  // Takes Something Returns Something

#include<stdio.h>
#include<conio.h>
int divisiblity10(int);
int average(int,int,int);

void main()
{   int a,b,c,d,e,f;
    printf("\nenter three values");
    scanf("%d%d%d",&a,&b,&c);
    e=average(a,b,c);
    printf("\n%d",e);
    printf("\nenter a number");
    scanf("%d",&d);
    f=divisiblity10(d);
    printf("\n%d",f);
    getch();
}
int average(int x,int y,int z)
{
    int w,s;
    s=x+y+z;
    w=s/3;
    return(w);
}


int divisiblity10(int x)
{
  if(x%10==0)
    return(1);
  else
    return(0);
}
