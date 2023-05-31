#include<iostream>
using namespace std;
class shape{
	
	protected:
		
		int width;
		int heigth;
		
	public:
		void setvalues(int w, int h)
		{
			width=w;
			heigth=h;
		
		}
};

class rect : public shape{
	
	public:
	int area(){
		
		return width*heigth;
	}
	
};


int main()
{
	int a, b;
	cout<<"Enter Heigth of Recangle:";
	cin>>a;
	cout<<"Enter width of Recangle:";
	cin>>b;
	
	rect obj;
	obj.setvalues(a,b);
	cout<<"Area of Rectanlge is:"<<obj.area();
	
	return 0;
}
