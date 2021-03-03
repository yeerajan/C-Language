/* Write a program to find the square of a number */
#include<stdio.h>
int square(int);
void main()
{
    int n,m;
    printf("Enter a number");
    scanf("%d",&n);
    m=square(n);
    printf("%d",m);
}
int square(int n)
{
    int y;
    y=n*n;
    return(y);
}
