main()
{
  int t,x,y,z,a,i,n;
  while(1)
  {
  printf("\n1 addition");
  printf("\n2 odd-even");
  printf("\n3 first n natural number");
  printf("\n4 exit");
  printf("\n\nenter your choice");
  scanf("%d",&t);

  switch(t)
 {
  case 1:
         printf("\nenter two number");
         scanf("%d%d",&x,&y);
         printf("\nsum is %d",x+y);
         break;
   case 2:
          printf("\nenter a number");
          scanf("%d",&x);
          x%2==0?printf("\neven"):printf("\nodd");
          break;
   case 3:
          printf("\nenter natural number");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          printf(" %d",i);
          break;
   case 4:
          exit(0);
   default:
           printf("\ninvalid option chosen");
 }}
}
