/* Pre-Processor Command in C Language,#define,defining macro like a function */
#include<stdio.h>
#define ABS(a) (a)<0?-(a):(a)
void main()
{
    printf("abs of -1 and 1 is %d,%d",ABS(-1),ABS(1));
}
