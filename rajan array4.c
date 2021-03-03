// WAP to find the sum of first n natural numbers using Recursion,function
// Sum of first n natural numbers

void main()
{
  int n,z;
  printf("enter value of n");
  scanf("%d",&n);
  z=fun(n);
  printf("%d",z);
}

int fun(int a)
{
  if(a==1)
    return(1);
  a=a+fun(a-1);
  return(a);
}
