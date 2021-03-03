/* strrev() function */
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20],a[20];
  printf("enter your name");

  gets(s);
  puts(s);

  strrev(s);
  puts(s);
}
