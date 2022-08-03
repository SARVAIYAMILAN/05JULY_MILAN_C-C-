#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	clrscr();
	printf("enter principle (p)");
	scanf("%d",&p);
	printf("enter rate (r)");
	scanf("%d",&r);
	printf("enter time (n)");
	scanf("%d",&n);
	printf("\nsimple int %f",(p*r*n)/100);
	printf("\ncompound int %f",p*(1+r)/100);
	getch();

}