//WAP to find the sum of first n natural numbers using loop

main()
{
   int i,sum=0,n;
   printf("enter value of n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
     sum=sum+i;
    printf("summation is %d",sum);
}

