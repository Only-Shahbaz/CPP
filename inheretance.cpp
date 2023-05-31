#include<iostream>
using namespace std;
class shape
{
	protected:
		int width;
		int height;
	public:
		void setwidth(int w)
		{
			width=w;
		}
		void setHeigth(int h)
		{
			height=h;
		}
		
};
class rect:public shape
{
	public:
	int getarea()
	{
		return(width*height);
	}	
};
int main()
{
	rect r;
	r.setHeigth(25);
	r.setwidth(50);
	cout<<"Total area of Rectangle is "<<r.getarea();
	return 0;
}
