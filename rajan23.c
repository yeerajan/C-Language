/* write a program to find out the greatest number out of three number */
main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
      {
        if(a>c)
        printf("%d",a);
        else
        printf("%d",c);
      }
    else
      {
        if(b>c)
        printf("%d",b);
        else
        printf("%d",c);
      }
}

/* this is much better but also can be improved more by using Conditional Operators */
