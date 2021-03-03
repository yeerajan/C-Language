/* File Handling In C Language */
/* Reading from a file using fscanf() function */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    int i;
    char str[100];
    fp=fopen("MyFile3.txt","r");
    while(fscanf(fp,"%s",str)!=EOF)
        printf("%s ",str);
        //puts(str);
    fclose(fp);
}
