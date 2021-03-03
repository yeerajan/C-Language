/* typedef in C Language */
#include<stdio.h>
#include<string.h>
typedef struct /*student*/
{
   int rollno;
   char name[20];
   int age;
}STUDENT;
void main()
{
  STUDENT s1;
  s1.rollno=9;
  strcpy(s1.name,"Rajan Kumar");
  s1.age=20;
  printf("name=%s\nrollno.=%d\nage=%d",s1.name,s1.rollno,s1.age);
}
