#include<iostream>
using namespace std;

class complex{
	private:
		int a;
	public:
	complex();
	complex(int x)
	{
		a=x;
	}
void operator ++(int)
{
	a++;
}
void print ()
{
	cout<<"Value of data Member is "<<a<<endl;
}
}; 
int main()
{
	complex obj(3);
	obj.print();
	obj++;
	obj.print();
	
	return 0;
}
