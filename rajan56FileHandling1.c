/* File Handling in C language */
/* Writing in a file in C Language using fputc() function and user will input */
#include<stdio.h>
#include<string.h>   //strlen(str);
#include<stdlib.h>   //exit(1);
#include<conio.h>    //getch();
void main()
{
    FILE *fp;
    int i;
    char str[100];
    fp=fopen("MyFile.txt","w");
    if(fp==NULL){
        printf("file not found");
        exit(1);
    }
    printf("enter your name");
    gets(str);
    for(i=0;i<strlen(str);i++)
        fputc(str[i],fp);
    //fputs(str,fp);
    //getch();
    fclose(fp);
    //getch();
}
