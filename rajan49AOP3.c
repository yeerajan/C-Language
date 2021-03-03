/* Pointer and Strings */
#include<stdio.h>
int length(char*);
char* reverse(char*);
int main()
{
  char s[]="RajanKuma";
  printf("%d\n",length(s));
  printf("%s",reverse(s));
}
int length(char *p)
{
  int i;
  for(i=0;*(p+i)!='\0';i++);
  return(i);
}
char* reverse(char *p)
{
    char t;
    int l,i;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
        {
        t=*(p+i);
        *(p+i)=*(p+l-i-1);
        *(p+l-i-1)=t;
        }
    return(p);
}
