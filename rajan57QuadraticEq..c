/* Write a program to find the quadratic roots of a quadratic equation */
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter values of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0){
        printf("two distinct roots:");
        x=(-b+sqrt(D))/(2.0*a);
        y=(-b-sqrt(D))/(2.0*a);
        printf("x=%f y=%f",x,y);
    }
    if(D==0){
        printf("two equal roots:");
        x=-b/(2.0*a);
        y=-b/(2.0*a);
        printf("x=%f y=%f",x,y);
    }
    if(D<0)
        printf("imaginary roots");
}
