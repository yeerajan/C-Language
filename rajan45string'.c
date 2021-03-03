#include<stdio.h>
int main()
{
   int i;
   char s[20];
   printf("enter your name");
   gets(&s[0]);
   puts(&s[0]);
   /*gets(s);   //used in substitute of scanf function,&s[0] is equivalent as s
   puts(s);   // in substitute of printf function   ,         ||
   */
   /*scanf("%s",s);
   printf("%s",s);
   */
    /*scanf("%s",&s[0]);
    printf("%s",&s[0]);
    */
}
