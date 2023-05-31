#include<iostream>
//Deep Copy example 

using namespace std;
class test
{
	int a;
	int b;
	int *p;
public:
	test(int x, int y, int z)
	{
		a=x;
		b=y;
		p=new int;
		*p=z;
		
	}	
	
	test(test &d)
	{
		a=d.a;
		b=d.b;
		p=new int;
		*p=*(d.p);
	}
	
	void disp()
	{
		cout<<"Value of a is "<<a<<" and b is "<<b<<" Pointer value is "<<*p;
	}
};

int main()
{
	test t(40,20,50);
	test t1=t;
	t1.disp();
	return 0;
}
