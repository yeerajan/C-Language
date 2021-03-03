/* PPC in C Language,#if,#else,#elif,#endif */
#include<stdio.h>
#define COUNTRY India
int main()
{
  #if COUNTRY==Pakistan
     printf("pakistani rupee");
  #elif COUNTRY==Bangladesh
     printf("Taka");
  #elif COUNTRY==Nepal
     printf("nepali rupee");
  #else
     printf("Indian Rupee");
  #endif
}

