#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("C:/c++/hello.txt");
	{
		cout<<"tops technologies";
	}
	ofstream f("C:/c++/hello.txt");
	file.close();
	return 0;
}
