#include<iostream>
using namespace std;
int main()
{
	int num, j;
	cout<<"Enter your table number:";
	cin>>num;
	
	cout<<"Enter your table range:";
	cin>>j;
	
	
	for (int i=1;i<=j;i++)
	{
		cout<<num<<"X"<<i<<"="<<i*num<<endl;
	}
	return  0;
}
