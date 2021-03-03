#include<stdio.h>
#include<string.h>
int main()
{
   char s[20],t[25];
   int n;
   printf("enter first string");
   gets(s);
   printf("enter second string");
   gets(t);

   puts(s);
   puts(t);

   n=strcmp(s,t);   //return value will be an integer(-1,0,1)
   printf("%d",n);
}
