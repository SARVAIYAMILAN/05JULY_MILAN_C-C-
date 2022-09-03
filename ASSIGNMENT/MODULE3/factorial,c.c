#include<stdio.h>

int factorial(int n);

int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("factorial number is %d",factorial (n));
	return 0;
}
int factorial(int n)
{
	if(n==0)
		return 0;
	int factnm1=f(n-1);
	int fact=factnm1*n;
	return 0;	
}
