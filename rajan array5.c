/*WAP to find the Even's sum and Odd's sum seperately,
where user will input how many numbers have to take ,
also user will input those numbers*/

void add(int);

void main()
{
  int n,y,t;
  printf("enter how many numbers you will input");
  scanf("%d",&n);
  printf("enter your numbers");
  for(t=1;t<=n;t++)
    scanf("%d",&y);
  add(y);
}

void add(int x)
{
  int i=0,j=0;
  if(x%2==0)
     {
        i=i+x;
        printf("Even sum is %d",i);
     }
  else
     {

         j=j+x;
         printf("Odd sum is %d",j);
     }
}
