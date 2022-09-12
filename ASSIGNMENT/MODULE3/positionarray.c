#include<stdio.h>
int main()
{
	int a[5],key,i,count=0;
	printf("enter the number");
	for(i=0;i<5;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter the number :");
	scanf("%d",a,&key);
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("%dposition is %d\n",key,i+1);
			count++;
		}
		printf("\n");
	}
}
