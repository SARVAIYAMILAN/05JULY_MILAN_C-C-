#include<stdio.h>
int main()
{
	FILE* fptr;
	int i,j,n;
	char str[100];
	fptr=fopen("C:/Users/APURVA/Favorites.txt","w");
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		{
			fprintf(fptr,"%d*%d=%d\n",n,i,n*i);
		}
	fclose(fptr);
	fptr=fopen("C:/Users/APURVA/Favorites.txt","r");
	for(j=1;j<=10;j++)
	{
		fscanf(fptr,"%s",&str);
		printf(str);
		printf("\n");
	}	
		
	
}
