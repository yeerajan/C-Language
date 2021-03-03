#include<stdio.h>
#include<string.h>
int main()
{
   char s[20];
   printf("enter your name");
   gets(s);
   puts(s);

   strupr(s);
   puts(s);
}
