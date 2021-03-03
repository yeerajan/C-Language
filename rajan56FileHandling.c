/* File Handling in C language */
/* Writing in a file in C Language using fputc() function */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  FILE *fp;
  int i;
  char s[]="My Name is Rajan Kumar";
  fp=fopen("rajan.txt","w");
  if(fp==NULL){
    printf("file not found");
    exit(1);
  }
  for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);
}
