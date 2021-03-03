// WAP to reverse the string using pointer
#include<stdio.h>
#include<string.h>
void reverse(char*);
int main(){
    char s[10]="Computer";
    int i;
    //reverse(s);
    strrev(s);
    printf(s);
}
/*void reverse(char*p){
    int r,i; char t;
    for(r=1;r<strlen(p);r++)
    for(i=0;i<strlen(p)-r;i++){
        t=*(p+i); *(p+i)=*(p+i+1); *(p+i+1)=t;
    }
}*/
