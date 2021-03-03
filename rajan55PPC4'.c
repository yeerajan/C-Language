
#include<stdio.h>
#define COUNTRY "India"
int main()
{
  #ifdef COUNTRY
     printf("%s is a great country",COUNTRY);
  #endif
  #ifndef COUNTRY
     printf("I love my Nation");
  #endif
}
