#include<iostream>
using namespace std;
class grand
//int house;
{
	
	public:
		int house;
		int gdata()
		{
		//	int house;
			cout<<"enter number of  house:";
			cin>>house;
			return 0;
			
		}
	
};
class parent : public grand
//int balance;
{
	
	public:
		int balance;
		int pdata()
			{
		//		int balance;
				cout<<"enter your balance;";
				cin>>balance;
				return 0;
				
			}
};
class child : public parent
//int showdata;
{
	public:
		int showdata()
		{
			cout<<"\nenter your house number:"<<house;
			//cin>>house;
			cout<<"\nenter your bank balance:"<<balance;
			//cin>>balance;
			return 0;
			
			
		}
};
int main()
{
	child c1;
	c1.gdata();
	c1.pdata();
	c1.showdata();
	return 0;
}
