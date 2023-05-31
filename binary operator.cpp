#include<iostream>
using namespace std;

class complex{
	private:
		int a , b;
	public:
		complex()
		{
		}
		complex(int x, int y)
		{
			a=x;
			b=y;
		}
	complex operator + (complex c)
	{
	complex temp; 
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;	
	}
	void print()
	{
		cout<<a <<" + "<<b <<endl;
	}
};

int main()
{
	complex obj(5,9), obj1(4,5);
	complex obj2;
	obj2=obj+obj1;
	obj2.print();
	
}
