   // Takes Nothing Returns something

#include<stdio.h>
#include<conio.h>
int divisiblity10(void);
int average(void);

void main()
{   int x,y;
    x=divisiblity10();
    printf("%d",x);
    y=average();
    printf("%d",y);
    getch();
}
int average()
{
    int x,y,z,w,s;
    printf("\nenter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    s=x+y+z;
    w=s/3;
    return(w);
}


int divisiblity10()
{
  int x;
  printf("\nenter a number");
  scanf("%d",&x);
  if(x%10==0)
    return(1);
  else
    return(0);
}
