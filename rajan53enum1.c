/* Enumerators in C Language */
#include<stdio.h>
//#include<conio.h>
enum boolean
{
  false,true
};
enum boolean isEven(int n)
{
   if(n%2==0)
     return(true);
   else
     return(false);
}
void main()
{
   int x;
   enum boolean result;
   printf("enter a number");
   scanf("%d",&x);
   result=isEven(x);
   if(result==true)
     printf("Even number");
   else
     printf("Odd number");
   //getch();
}
