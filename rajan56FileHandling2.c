/* File Handling in C Language */
/* Reading from a file in C Language using fgetc() function*/
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
//#include<conio.h>
void main()
{
   FILE *fp;
   char ch;
   int i;
   fp=fopen("MyFile.txt","r");
   if(fp==NULL){
     printf("file not found");
     exit(1);
    }
   ch=fgetc(fp);
   while(!feof(fp)){
     printf("%c",ch);
     ch=fgetc(fp);
   }
    fclose(fp);
}
