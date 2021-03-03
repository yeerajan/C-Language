/* write a program to show the grades of students according to their marks using if else if */
#include<stdio.h>
main()
{
  int x;
  printf("enter your marks");
  scanf("%d",&x);

  if(x>90)
  printf("grade- A");
  else if(x>80)
  printf("grade- B");
  else if(x>70)
  printf("grade- C");
  else
  printf("grade- D");
}
