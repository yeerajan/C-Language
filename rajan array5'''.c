/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/

int Even(int);

void main()
{
  int n,t,z[n],sum=0;
  printf("enter how many number you will input");
  scanf("%d",&n);
  printf("enter your numbers");
  for(t=1;t<=n;t++)
	 scanf("%d",&z[t]);
  for(t=1;t<=n;t++)
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

