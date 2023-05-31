#include<iostream>
using namespace std;
int main()
{
	float gp;
	cout<<"Enter your CGPA :";
	cin>>gp;
	
	if (gp==4)
	{
		cout<<"A+";
	}
	else if (gp<=3.9&&gp>=3.7)
	{
		cout<<"A";
	}
	else if (gp<=3.69&&gp>=3.5)
	{
		cout<<"B+";
	}
	else
	{
		cout<<"invalid value Entered";
	}
	
	return 0;
}
