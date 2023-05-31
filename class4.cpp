#include <iostream>
using namespace std;
int main()
{
	float radius,diameter, circumference, area;
	
	cout<<"Enter radius: ";
	cin>>radius;
	
	diameter=radius*2;
	cout<<"Diameter is :"<<diameter<<endl;
	area=3.14*radius*radius;
	cout<<"Area of circle is :"<<area<<endl;
	circumference=2*3.14*radius;
	cout<<"circumference of circle is :"<<circumference;
	
	return 0;
}
 
