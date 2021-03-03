/* Enumerators in C Language */
#include<stdio.h>
enum month
{
  jan=1,feb,mar,apr,may=2,jun,jul,aug,sept,oct,nov,dec
};
void main()
{
  enum month m1,m2,m3;
  m1=jan;
  m2=may;
  m3=jun;
  //printf("")
  printf("%d\n%d",apr,nov);
}
