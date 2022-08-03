#include<stdio.h>
#include<conio.h>
void main()
{
	int eng,guj,eco,ba,com;
	float per;
	clrscr();
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&eng,&guj,&eco,&ba,&com);
	per=(eng+guj+eco+ba+com)/5;
	printf("percentage =%f\n",per);
	if(per>=75)
	{	printf("first class");
	}
	else if(per>=60)
	{	printf("second class");
	}

	else if (per>=50)

	{	printf("pass");
	}
       else
       {	printf("fall");
       }
       getch();


}

