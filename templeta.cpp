#include<iostream>
using namespace std;
template <class T>

T reverse(T x)
{
return (-x);
}
main()
{
	int i=10;
	double j=20.34;
	
	cout<<"doube data Type<<"<<reverse(j);
	cout<<"\n"<<"Integer Data Type<<" <<reverse(i);
} 
