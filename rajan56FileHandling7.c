/* file handling in C language */
/* Writing in a file using fprintf() function */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[100];
    fp=fopen("MyFile3.txt","w");
    printf("enter a string");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}
