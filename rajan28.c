/* write a program to find out the greatest number out of three number */
main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    printf("%d",a>b?a>c?a:c:b>c?b:c);
}

/* we cannot improve more than this */
/* note that a>b?a>c?a:c:b>c?b:c will give an integer thats why we used it as an integer */
