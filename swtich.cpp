#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	cout<<"Enter your Operation: ";
	cin>>op;
	
	switch (op){
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
		case '*':
			cout<<num1<<"X"<<num2<<"="<<num1*num2;
		case '/':
			cout<<num1<<"%"<<num2<<"="<<num1/num2;
		default:
		cout<<"YOur input operator is invalid: Pleaes try again";	
	}
	return 0;
}
