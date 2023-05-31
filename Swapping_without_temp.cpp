#include<iostream>
using namespace std;
int main()
{
	int x=45;
	int y=54;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<"After Swapping"<<endl;
	y=x+y;
	x=y-x;
	y=y-x;
	cout<<x<<endl;
	cout<<y<<endl;
	
}
