// multiple strings handling
#include<stdio.h>
#include<string.h>
int main()
{
  char s[3][10]={"Rajan","Ashish","Subhash"};
  int i,j;
  for(i=0;i<=2;i++)
      puts(&s[i][0]);  // to print all name
  /*puts(&s[0][0]);      // to print only Rajan */
  /*for(i=0;i<=2;i++)
    for(j=0;s[i][j]!='\0';j++)
      puts(&s[i][j]);
  */
}
