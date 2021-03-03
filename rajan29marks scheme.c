/* write a program of marking scheme such that grades will be as
A,B,C,D,E,F for marks obtained as 100>A>90,90>B>80...50>F>0 respectively */

main()
{
  int x;
  x<=100;
  x>=0;
  printf("enter your marks");
  scanf("%d",&x);

  if(x>90)
  printf("A");
  else
    {
    if(x>80)
    printf("B");
    else
      {
        if(x>70)
        printf("C");
        else
         {
          if(x>60)
          printf("D");
          else
            {
              if(x>50)
              printf("E");
              else
              printf("F");
            }
         }
      }
    }
}
