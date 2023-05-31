#include<iostream>
using namespace std;
int main()
{
	int age1,age2,age3,age4,age5, sum, avg;
	
	cout<<"Enter the age of first student ";
	cin>>age1;
	
	cout<<"Enter the age of second student ";
	cin>>age2;
	
	cout<<"Enter the age of third student ";
	cin>>age3;
	
	cout<<"Enter the age of fourth student ";
	cin>>age4;
	
	cout<<"Enter the age of fifth student ";
	cin>>age5;
	
	sum=age1+age2+age3+age4+age5;
	
	avg=sum/5;
	
	cout<<"Average of the given values is:"<<avg;
	return 0;
}
