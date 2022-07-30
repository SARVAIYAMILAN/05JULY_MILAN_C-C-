#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
	       {
			k++;
			printf("%d ",k);
	       }

	   printf("\n");
	}
	getch();
}







