/* Pre-Processor Command,## */
#include<stdio.h>
#define ACTION(a,b) a##b
void main()
{
   printf("ACTION(3,4) is equal to %d",ACTION(3,4));
}
