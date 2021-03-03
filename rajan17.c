main()
{
   int a,b,c;
   printf("enter three number");
   scanf("%d%d%d",&a,&b,&c);

   if(a>b&&a>c)
   {
     printf("biggest no. is %d",a);
   }
   else
   {
     if(b>c)
     printf("biggest no. is %d",b);
     else
     printf("biggest no. is %d",c);
   }
}
