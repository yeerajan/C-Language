/* Write a program to Calculate the Factorial of a number */
#include<stdio.h>
int fact(int);
void main()
{
    int x,m;
    printf("enter a number");
    scanf("%d",&x);
    m=fact(x);
    printf("%d",m);
}
int fact(int n)
{
    if(n==1)
        return(1);
    n=n*fact(n-1);
    return(n);
}
