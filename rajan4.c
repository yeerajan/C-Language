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
	gotoxy(20,10);
	int x,y,z,a,b,c,d;
	printf("enter two number");
	scanf("%d%d",&x,&y);
	z=x*y;
	printf("product of %d and %d is %d",x,y,z);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of %d and %d is %d",a,b,c);
	d=z+c;
	printf("sum of %d and %d is %d",z,c,d);
}
