/* write a program to find out the greatest number out of three number */
main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
      a>c?printf("%d",a):printf("%d",c);
    else
      b>c?printf("%d",b):printf("%d",c);
}

/* best program ever BUT again we can improve by applying Conditional Operators */
