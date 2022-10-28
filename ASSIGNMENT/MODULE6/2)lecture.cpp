#include<iostream>
using namespace std;
class lecturer
{
public :
//	int i;
	char lecname[100];
	char subname[100];
	char coursname[100];
	int numoflec;
	
	void getdata();
	void displaydata(); 
}lec[100];
void lecturer::getdata()
{
//public:
	int i;
	for(i=0;i<=5;i++)

	{
		cout<<"\nenter the lecture info:"<<i+1;
		cout<<"\nenter the lecturer name:";
		cin>>lec[i].lecname;
		cout<<"\nenter the subjject name:";
		cin>>lec[i].subname;
		cout<<"\nenter the course name:";
		cin>>lec[i].coursname;
		cout<<"\nenter the number of lecture :";
		cin>>lec[i].numoflec;
		}	
}
void lecturer::displaydata()
{
	int i;
		for(i=0;i<=5;i++)
			cout<<"\nlecturer info :"<<i+1;
			cout<<"\n________________________";
			cout<<"\nenter the lecturer name :"<<lec[i].lecname;
			cout<<"\nenter the subject name :"<<lec[i].subname;
			cout<<"\nenter the course name :"<<lec[i].coursname;
			cout<<"\nenter the number of lecture :"<<lec[i].numoflec;
		
}
int main()
{
	char lecname[100];
	char subname[100];
	char coursname[100];
	int namoflec;
	void showdata();
	int i;
	lecturer l1;
	
	cout<<"\nenter the information";
	cout<<"\n**************************";
	cout<<"\nenter the lecturer name :";
	cin>>l1.lecname;
	cout<<"\nenter the subject name :";
	cin>>l1.subname;
	cout<<"\nenter the course name :";
	cin>>l1.coursname;
	cout<<"\nenter the number of leccture :";
	cin>>l1.numoflec;
	
	l1.getdata();
	l1.displaydata();
//	l1.lecture();

	return 0;
}
