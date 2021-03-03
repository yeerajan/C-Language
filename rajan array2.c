// WAP to find the the average of n numbers,where user will input those numbers
// Takes Something Return Nothing
// Array,Function, Float,for loop- all have been used

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
  int i,a[b],y;
  float avg=0.0,c;
  y=b-1;
  printf("enter those values");
  for(i=0;i<=y;i++)
    scanf("%d",&a[i]);
  for(i=0;i<=y;i++)
    avg=avg+a[i];
  c=avg/b;
  printf("average is %f",c);
}
