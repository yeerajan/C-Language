
// Recursion
int fun(int);

void main()
{
   int x,y;
   printf("enter a number");
   scanf("%d",&x);
   y=fun(x);
   printf("%d",y);
}

int fun(int a)
{
   int z;
   if(a==1)
    return(1);
   z=a+fun(a-1);
   return(z);
}
