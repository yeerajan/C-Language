/* write a program to find out the greatest number out of three number */

main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    printf("%d",a);
    if(b>a&&b>c)
    printf("%d",b);
    if(c>a&&c>b)
    printf("%d",c);
}

/* all numbers will be same, there will be no output */
/* for example 4,4,4 will give no output */
