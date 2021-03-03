   // functions in C

#include<stdio.h>
#include<conio.h>
void add(void);        //Global Declaration
void isEven(void);     //Global Declaration
void main()
{
   add();    //User defined function
   isEven(); //      ||
   add();    //      ||
   getch();  //Predefined function
}

void add()
{
  int a,b;
  printf("\nenter two numbers");
  scanf("%d%d",&a,&b);
  printf("\nSum is %d",a+b);
}

void isEven()
{
  int x;
  printf("\nenter a number");
  scanf("%d",&x);
  if(x%2==0)
   printf("Even");
  else
   printf("Odd");
}
