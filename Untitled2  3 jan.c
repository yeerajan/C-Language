// Sorting using Pointer
#include<stdio.h>
void input(int*);
void sort(int*);
void display(int*);
int main(){
    int a[5];
    printf("enter five numbers");
    input(a);
    sort(a);
    display(a);
}
void input(int*p){
    int i;
    for(i=0;i<5;i++)
        scanf("%d",p+i);
}
void sort(int*p){
    int round,i,t;
    for(round=1;round<5;round++)
    for(i=0;i<5-round;i++)
    {
        if(*(p+i)<*(p+i+1))
        {
            t=*(p+i); *(p+i)=*(p+i+1); *(p+i+1)=t;
        }
    }

}
void display(int*p)
{
    int i;
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}

