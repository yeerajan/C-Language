/* write a program to find out the greatest number out of three number */

main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
        printf("%d",a);
    else
      {
        if(b>c)
        printf("%d",b);

        else
        printf("%d",c);
      }
}


/* this program is much better than previous program But we can improve more */
