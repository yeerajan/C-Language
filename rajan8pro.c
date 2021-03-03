#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    int i;
    for(i=5;i<=10;i++)
    {
    int a,b;
    gotoxy(30,i);
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("product of %d and %d is %d",a,b,a*b);
    }
}
