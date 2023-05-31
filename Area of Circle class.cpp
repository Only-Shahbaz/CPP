#include<iostream>
#define PI 3.14159265
using namespace std;
class circle
{
	int rad;
	public:
		void area()
		{
			double rad=5.6;
			
			cout<<2*PI*rad;
		}
		
};
int main()
{
circle c;
c.area();
return 0;
}


