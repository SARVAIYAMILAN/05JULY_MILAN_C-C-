#include<stdio.h>

struct employee
{
	int no;
	char name[30];
	char add [10];
	int age;
}emp[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("employee information %d\n",i+1);	
	printf("\nenter the employee no :");
	scanf("%d",&emp[i].no);
	printf("enter the employee name :");
	scanf("%s",&emp[i].name);
	printf("enter the employee address :");
	scanf("%s",&emp[i].add);
	printf("enter the employee age :");
	scanf("%d",&emp[i].age);
    }
    for(i=5;i<5;i++)
    {
	printf("enter the employee no :%d\n",emp[i].no);
	printf("enter the employee name :%s\n",emp[i].name);
	printf("enter the employee address :%s\n",emp[i].add);
	printf("enter the employee age :%d\n",emp[i].age);
    }
	return 0;
}
