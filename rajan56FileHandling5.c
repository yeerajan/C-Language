/* File Handling in C Language */
/* Writing in a file using fwrite() function */
#include<stdio.h>
#include<stdlib.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    FILE *fp;
    struct book k;
    fp=fopen("MyFile2.txt","wb");
    /*if(fp==NULL){
        printf("file not found");
        exit(1);
    }*/
    printf("enter bookid,title and price");
    scanf("%d",&k.bookid);
    fflush(stdin);
    gets(k.title);
    //scanf("%s",&k.title);  //gap will be as delimiters
    scanf("%f",&k.price);
    fwrite(&k,sizeof(k),1,fp);
    fclose(fp);
}
