#include<iostream>
using namespace std;
int main()
{
	float gp;
	cout<<"enter the CGPA ";
	cin>>gp;
	
	if(gp==4)
	{
		cout<<"A+";
	}
	else if (gp>=3.66&&gp<=3.99)
	{
		cout<<"A";
	}
	else if (gp>=3.66&&gp<=3.99)
	{
		cout<<"A";
	}
	else
	{
		cout<<"Invalid value";
	}
	return 0;
}
