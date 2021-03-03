// Takes Something Returns Nothing

#include<stdio.h>
#include<conio.h>
void divisiblity10(int);
void average(int,int,int);

void main()
{   int a,b,c;
    printf("\nenter a number");
    scanf("%d",&a);
    divisiblity10(a);
    printf("\nenter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    average(a,b,c);
    getch();
}
void average(int a,int b,int c)
{
    int s,w;
    s=a+b+c;
    w=s/3;
    printf("\ngreatest int value of average is %d",w);
}


void divisiblity10(int x)
{
  if(x%10==0)
    printf("\ndivisible by 10");
  else
    printf("\nnot divisible by 10");
}
