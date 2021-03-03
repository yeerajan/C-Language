/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/

int Even(int);

int main()
{
  int n,t,z[n],sum=0,u;
  printf("enter how many number you will input");
  scanf("%d",&n);
  u=n-1;
  printf("enter your numbers");
  for(t=0;t<=u;t++)
	 scanf("%d",&z[t]);
  for(t=0;t<=u;t++)
     sum=sum+Even(z[t]);
  printf("%d",sum);
}

int Even(int x)
{
  if(x%2==0)
    return(x);
  else
    return(0);
}

