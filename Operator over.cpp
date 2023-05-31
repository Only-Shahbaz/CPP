#include<iostream>
using namespace std;

class over

{
	private:
		int a,b,c;
	public:
		void getdata();
		void operator -();
		void disp();
};

void over::getdata()
{
	cout<<"Enter a:=";
	cin>>a;
	cout<<"Enter b:=";
	cin>>b;
	cout<<"Enter c:=";
	cin>>c;
}
void over::operator-()
{
a=-a;
b=-b;
c=-c;	
}
void over::disp()
{
	cout<<"\nVAUE OF A IS ="<<a;	
	cout<<"\nVAUE OF B IS ="<<b;
	cout<<"\nVAUE OF C IS ="<<c;
}
main()
{
	over t;
	t.getdata();
	-t;
cout<<"\nAfter operator overloading";

t.disp();
return 0;	
}
