// WAP to find the sum of ten numbers,where user will input those numbers

main()
{
   int i,a[10],sum=0;
   printf("enter ten numbers");
   for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
   for(i=0;i<=9;i++)
     sum=sum+a[i];
   printf("%d",sum);
}
