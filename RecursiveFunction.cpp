#include<iostream>
using namespace std;

int sum(int n)
{
	if(n!=0)
	{
		return (n+sum(n-1));
	
	}
	else
	{
		return n;
	}
}
int main()
{
	int num;
	cout<<"Enter your number to find arthimatic sum : ";cin>>num;
	int total = sum(num);
	cout<<"The arithmatic sum of "<<num<<" is "<<total<<endl;

return 0;		
	
}
