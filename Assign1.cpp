#include <iostream>
using namespace std;
int main()
{
	cout<<"My Vu Id is MC210201279"<<endl;
	cout<<"My Name is Shahbaz Ahmed\n"<<endl;
	
	int a,b,c,sum,i=1;
	a=2;
	b=7;
	c=9;
	sum=a+b+c;
	cout<<"Sum of my vu ID is ="<<sum<<endl;
	
	if(sum%2==1)
	{ 
			cout<<"ID is an Odd Value\n"<<endl;
			cout<<"+++++++++++++++++++++++++\n"<<endl;
		while(i<=sum)
		{
			
			cout<<"Iteration:"<<i<<endl;
			cout<<"My Vu Id is MC210201279"<<endl;
			i++;
		}
	}
			else
			{
					cout<<"ID is an Even Value\n"<<endl;
					cout<<"+++++++++++++++++++++++++\n"<<endl;
			while(i<=sum)
				{
					
					cout<<"Iteration:"<<i<<endl;
					cout<<"My Name is Shahbaz Ahmed"<<endl;
					i++;
				}
			}
		
	
	
	return 0;
}
