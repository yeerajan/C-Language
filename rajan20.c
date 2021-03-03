/* write a program to find out the greatest number out of three number */

main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b&&a>=c)     /*when this condition will be true */
    printf("%d",a);

    if(b>=a&&b>=c)     /* this condition will be automatic false */
    printf("%d",b);

    else
    printf("%d",c);    /* and then this will also print */
}


/* for example 4,3,2 will give 42 */
