// Recursion in C
#include<stdio.h>
#include<conio.h>
int NatSum(int);
int main(){
	int x,S;
	scanf("%d",&x);
	S=NatSum(x);
	printf("Sum of first %d Natural no. is %d",x,S);
	getch();
}
int NatSum(int x){
	int S;
	if(x==1)
	return 1;
	S=x+NatSum(x-1);
	return S;
}
