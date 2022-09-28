#include<iostream>
//#include<string.h>
using namespace std;


class bank
{
	public:
	int acno;
	char name [100];
	char actype[100];
	float balance;
	
	
	/*
	bank(char name[5],char actype[5],int acno,float balance)
	{
//		balance=0;
//		cout<<"This information:";	
	name=this->name;
	actype=this->actype;
	acno=this->acno;
	balance=this->balance;
	};
		*/
	void deposit();
	void withdraw();
	void diplay();
		
		
};
void bank::deposit()
{
//	balance=0;
	int demat;
	cout<<"\nenter the deposit amount:";
	cin>>demat;
	balance+=demat;
		
}
void bank::withdraw()
{
	int wamt1;
	cout<<"\nenter the withdrawnamount:";
	cin>>wamt1;
	if(wamt1>balance)
		cout<<"\ncannot withdraw amount";
	balance-=wamt1;
	
}
void bank::diplay()
{
//	int display;
	cout<<"\n____________";
	cout<<"\nacno:"<<acno;
	cout<<"\nacname"<<name;
	cout<<"\nactype"<<actype;
	cout<<"\nbalance"<<balance;
	
}
int main()
{
	int acno;
	char name[100];
	char actype[100];
	float balance;
	bank b1/*(name,actype,acno,balance)*/;
	
	cout<<"enter the detail";
	cout<<"\n_________";
	
	cout<<"\naccount name:";
	cin>>b1.name;
	cout<<"\naccount type:";
	cin>>b1.actype;
	cout<<"\naccount no:";
	cin>>b1.acno;
	cout<<"\nbalance:";
	cin>>b1.balance;
	
	
	
	b1.deposit();
	b1.withdraw();
	b1.diplay();
	return 0;
	
	
	
}


























