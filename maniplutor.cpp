#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a=10;
	int b=100;
	int c=1000;
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	cout<<"After usign setw manipulator:"<<endl;
	
	cout<<setfill('#')<<setw(10)<<a<<endl;
	cout<<setw(5)<<b<<endl;
	cout<<setw(5)<<c<<endl;
	
	return 0;
}
