#include<stdio.h>
#include<string.h>
int main()
{
  char s[30];
  printf("enter your name");
  gets(s);
  puts(s);

  strcat(s," Student");   // to add any string to given string
  puts(s);
}
