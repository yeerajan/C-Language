/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/

void fun(int);
int add(int);

void main()
{
  int n,y,t,s;
  printf("enter how many numbers you will input");
  scanf("%d",&n);
  printf("enter your numbers");
  for(t=1;t<=n;t++)
    scanf("%d",&y);
  fun(y);
}

void fun(int x)
{
  int g=0,h=0;
  if(x%2==0)
     g=g+add(x);
     printf("%d",g);
  else
     h=h+add(x);
     printf("%d",h);
}

int add(int z)
{
    int i=0;
    i=i+z;
    return(i);
}
