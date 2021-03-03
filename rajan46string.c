/*  strlen() function  */
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  int n;
  printf("enter your name");
  gets(s);
  puts(s);
  n=strlen(s);  // To find length of the string
  printf("Length is %d\n",n);
}
