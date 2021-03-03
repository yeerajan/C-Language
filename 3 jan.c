// Pointer and strings in array
#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    char s[10]="Computer";
    char *p;
    p=s;
    printf(p);
    //printf("%s",p);  // p=s=&s[0]
    /*for(i=0;s[i]!='\0';i++){
        printf("%c",*(p+i));
    }*/
}
