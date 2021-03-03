   // Takes Nothing Returns Nothing

#include<stdio.h>
#include<conio.h>
void divisiblity10(void);
void average(void);

void main()
{
    divisiblity10();
    average();
    getch();
}
void average()
{
    int x,y,z,w,s;
    printf("\nenter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    s=x+y+z;
    w=s/3;
    printf("\ngreatest int value of average is %d",w);
}


void divisiblity10()
{
  int x;
  printf("\nenter a number");
  scanf("%d",&x);
  if(x%10==0)
    printf("\ndivisible by 10");
  else
    printf("\nnot divisible by 10");
}
