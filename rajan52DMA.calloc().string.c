/* DMA(dynamic memory allocation),calloc(), string */
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int i;
   char *p;
   p=(char*)calloc(20,1);
   /*{
    p="Rajan Kumar";
    puts(p);
    //printf("%s",p);
   }*/
   {
    printf("enter your name");
    gets(p);
    //scanf("%s",p);   // it will consider gap as delimiters
    puts(p);
    //printf(p);
    //printf("%s",p);
   }
}
