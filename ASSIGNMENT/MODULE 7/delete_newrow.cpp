#include<iostream>
using namespace std ;
int main()
{
	int *pointer;
	pointer = new int;
	*pointer = 20;
	cout<<*pointer;
	delete  pointer;
	return 0;
}
