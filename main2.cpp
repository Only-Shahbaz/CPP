#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a = 11;
	
	cout<<"Decimal Values"<<a<<endl;
	
	cout<<setbase(8)<<a<<endl;
	cout<<oct<<a<<endl;
	
	return 0;
}
