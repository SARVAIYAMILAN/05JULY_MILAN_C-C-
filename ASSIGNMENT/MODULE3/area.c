#include<stdio.h>
int main()
{
	int number;
	float base,length,breadth,hight,area,radius;
	printf("1 triangle");
	printf("2 rectangle");
	printf("3 circle");
	printf("enter the choise");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1:
		printf("enter the base and hight:\n");
		scanf("%f%f",&base,&hight);
		area=0.5*base*hight;
		printf("area of triangle %f\n",area);
		break;
		
		case 2:
		printf("enter the length and breadth:\n");
		scanf("%f%f",&length,&breadth);
		area=length*breadth;
		printf("area og rectangle %f\n",area);
		break;
		
		case 3:
		printf("enter the radius:\n");
		scanf("%f",&radius);
		area=radius;
		printf("area of radius %f",area);
		break;	
	}
}
