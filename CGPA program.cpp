#include <iostream>
using namespace std;
int main() 
{
	double gp;
	cout<<"Enter the CGPA";
	cin>>gp;
	
	if(gp==4)
	{
		cout<<"A+";
	}
	else if (gp<3.99 )
	{
		cout<<"gk";
	} else {
		cout<<"hello";
	}
	
//	&& gp<=3.99
//	else if (gp>=3.33&&gp<=3.65)
//	{
//		cout<<"B+";
//	}
//	else if (gp>=3.00&&gp<=3.32)
//	{
//		cout<<"B";
//	}
//	else if (gp>=2.66&&gp<=2.99)
//	{
//		cout<<"B-";
//	}
//	else if (gp>=2.00&&gp<=2.65)
//	{
//		cout<<"C";
//	}
//	else if (gp>=1.00&&gp<=1.99)
//	{
//		cout<<"D";
//	}
//	else 
//	{
//		cout<<"F";
//	}
//

	return 0;
}
