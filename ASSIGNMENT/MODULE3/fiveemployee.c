#include<stdio.h>

struct employee{
	int no;
	char name[100];
	char add[100];
	int age;
}emp[5];
int main()
{
	int i;
	for(i=1;i<5;i++){
		printf("employee info %d\n",i+1);
		printf("enter the employee no :",i);
		scanf("%d",&emp[i].no);
		printf("enter the employee name:");
		scanf("%s",&emp[i].name);
		printf("enter the employee address:");
		scanf("%s",&emp[i].add);
		printf("enter the employee age:");
		scanf("%d",&emp[i].age);
	}
	for(i=1;i<5;i++){
		printf("\nemployee info:%d",i+1);
		printf("\nemployee no is :%d",emp[i].no);
		printf("\nemployee name is :%s",emp[i].name);
		printf("\nemployee address is :%s",emp[i].add);
		printf("\nemployee age is :%d",emp[i].age);
		
	}
}
