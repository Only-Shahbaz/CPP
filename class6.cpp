#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char ops;
	cout<<"Enter your Number 1:";
	cin>>num1;
	
	cout<<"Enter your Number 2:";
	cin>>num2;
	
	cout<<"Enter your Operation:";
	cin>>ops;
	
	switch(ops)
	{
		case '+':cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
		
		case '-':cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
		
		case '*':cout<<num1<<"X"<<num2<<"="<<num1*num2;
		break;
		
		case '/':cout<<num1<<"%"<<num2<<"="<<num1/num2;
		break;
		
	}
	
	return 0;
}
