#include<iostream>
using namespace std;
int main()
{
	int num, digit;
	cout<<"Enter your Number: ";
	cin>>num;
	
	digit=num%10;
	cout<<digit<<",";
	num=num/10;

	digit=num%10;
	cout<<digit<<",";
	num=num/10;
	
	
	digit=num%10;
	cout<<digit<<",";
	num=num/10;	
	
	digit=num%10;
	cout<<digit<<",";
	num=num/10;
	
	digit=num%10;
	cout<<digit;
	num=num/10;
	return 0;
}
