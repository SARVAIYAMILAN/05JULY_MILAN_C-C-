#include<stdio.h>
int main()
{
	int *a,*b,no1,no2,sum;
	a=&no1,b=&no2;
	printf("enter the two number:");
	scanf("%d %d",&no1,&no2);
	sum=*a+*b;
	printf("addition for two number is:%d",sum);
	return 0;
	
	
}
