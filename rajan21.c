/* write a program to find out the greatest number out of three number */

main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b&&a>=c)
        printf("%d",a);
    else
      {
        if(b>=a&&b>=c)
        printf("%d",b);

        else
        printf("%d",c);
      }
}

/* this program will be true for all values of a,b,c ,
But we can improve much better than this program by not using 'a' when first 'if' will be false*/
