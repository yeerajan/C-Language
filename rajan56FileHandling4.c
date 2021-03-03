/* File Handling in C Language */
/* Writing in a file using fputs() in C Language */
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void main()
{
   FILE *fp;
   char str[100];
   fp=fopen("MyFile1.txt","w");
   if(fp==NULL){
    printf("file not found");
   exit(1);
   }
   printf("enter a string");
   gets(str);
   fputs(str,fp);
   fclose(fp);
}
