// when we want Multiple string to input from user
#include<stdio.h>
#include<string.h>
int main()
{
   char s[3][10];
   int i;
   printf("Enter three strings");
   for(i=0;i<=2;i++)
     gets(&s[i][0]);
   for(i=0;i<=2;i++)
    {
     //puts(&s[i][0]);
     //puts(s[i]);
     //printf("%s\n",&s[i][0]);
     printf("%s\n",s[i]);
    }
}
