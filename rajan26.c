/* write a program to find out the greatest number out of three number */
main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    a>b ? a>c?printf("%d",a):printf("%d",c) : b>c?printf("%d",b):printf("%d",c) ;
}

/* this program can be shorted more by removing those gaps but thats fine */
/* we can improve little better by taking printf function */
