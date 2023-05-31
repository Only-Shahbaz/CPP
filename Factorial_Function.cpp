#include <iostream>
using namespace std;

int fact(int a)
{
	if (a<=1)
	{
		return 1;
	}
	return a * fact(a-1);
}
int main()
{
	int num;
	
	cout<<"Enter your Number : ";	cin>>num;
	
	cout<<"Factorial of Your Number "<<num<<" is :"<<fact(num);
	
	return 0;
}
