// WAP to find the sum of n numbers,where user will input those numbers
// Takes Something Return Something
// Function,Array,for loop- all have been used.

int SUM(int);

void main()
{
  int n,z;
  printf("enter value of n ");
  scanf("%d",&n);
  z=SUM(n);
  printf("%d",z);
}

int SUM(int b)
{
  int i,a[b],sum=0,y;
  y=b-1;
  printf("\nenter those values ");
  for(i=0;i<=y;i++)
    scanf("%d",&a[i]);
  for(i=0;i<=y;i++)
    sum=sum+a[i];

  return(sum);
}
