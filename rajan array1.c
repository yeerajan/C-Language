//WAP to find the sum of n numbers,where user will input those numbers
//Takes Something Return Nothing

void SUM(int);

void main()
{
  int n;
  printf("enter value of n");
  scanf("%d",&n);
  SUM(n);
}

void SUM(int b)
{
  int i,a[b],sum=0,y;
  y=b-1;
  printf("enter those values");
  for(i=0;i<=y;i++)
    scanf("%d",&a[i]);
  for(i=0;i<=y;i++)
    sum=sum+a[i];

  printf("sum is %d",sum);
}
