/* Pre-Processor Command in C Language,#define,defining macro like a function */
/*#include<stdio.h>
#define PRODUCT(a,b) a*b
void main()
{
  printf("product of 3+2 and 4-6 is %d",PRODUCT(3+2,4-6));
}
Output=5*/

/* Pre-Processor Command in C Language,#define,defining macro like a function */
#include<stdio.h>
#define PRODUCT(a,b) (a)*(b)
void main()
{
   printf("product of 3+2 and 4-6 is %d",PRODUCT(3+2,4-6));
}
//Output=-10
