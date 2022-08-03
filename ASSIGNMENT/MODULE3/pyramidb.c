#include<stdio.h>
int main()
{
	int i,j,h;
	i=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j<i;j++)
		{
			printf("*");
		}
		for(h=1;h<=i;h++)
		{ 
			printf("%d ",h);
		}
		printf("\n");
	}
	return 0;
}
