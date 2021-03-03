/* File Handling in C Language */
/* Reading from a file using fgets() in C language */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[10];
    fp=fopen("MyFile.txt","r");
    if(fp==NULL){
        printf("file not found");
        exit(1);
    }
    while(fgets(str,8,fp)!=NULL){
      printf("%s",str);
    }
    fclose(fp);
}
