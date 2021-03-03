/* file handling in C */
/* Reading from a file using fread() function */
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
   struct book b;
   fp=fopen("Myfile2.txt","rb");
   /*if(fp==NULL){
     printf("file not found");
     exit(1);
   }*/
   fread(&b,sizeof(b),1,fp);
   printf("bookid:%d,title:%s,price:%f",b.bookid,b.title,b.price);
   fclose(fp);
}
