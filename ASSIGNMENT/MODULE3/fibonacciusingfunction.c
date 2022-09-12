#include<stdio.h>

int fib(int j);
int main()

{
	int j;
	printf("enter the range");
	scanf("%d",&j);
	printf("fibonacci serise is :\n");
	fib (j);
	return 0;
}
int fib(int j)
{
	int a=0,b=1,c;
	while(a<=j)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
