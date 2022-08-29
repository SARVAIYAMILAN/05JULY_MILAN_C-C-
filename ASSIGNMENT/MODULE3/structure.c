#include<stdio.h>

struct employee
{
	int no;
	char name[30];
	char add [10];
	int age;
}emp;
int main()
{
	printf("enter the employee no :");
	scanf("%d",&emp.no);
	printf("enter the employee name :");
	scanf("%s",&emp.name);
	printf("enter the employee address :");
	scanf("%s",&emp.add);
	printf("enter the employee age :");
	scanf("%d",&emp.age);
	printf("enter the employee no :%d\n",emp.no);
	printf("enter the employee name :%s",emp.name);
	printf("enter the employee address :%s",emp.add);
	printf("enter the employee age :%d",emp.age);
	return 0;
}

