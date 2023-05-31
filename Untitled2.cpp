# include <iostream>
using namespace std;
# define PI 3.14159265
class Circle
{
private:
double radius;
public:
void setRadius();
void computeAreaCirc();
Circle();
~Circle();

};
Circle::Circle()
{
radius = 0.0;
}
void Circle::setRadius()
{
radius = 5.6;
}
void Circle::computeAreaCirc()
{
cout << "Area of circle is: " << PI * (radius * radius) << endl;
cout << "Circumference of circle is: " << 2 * PI * radius << endl;
}
Circle::~Circle()
{
}

class Rectangle
{
private:
double length;
double width;
public:
void setLength();
void setWidth();
void computeArea();
Rectangle();
~Rectangle();

};
Rectangle::Rectangle()
{
length = 0.0;
width = 0.0;
}
void Rectangle::setLength()
{
length = 5.0;
}
void Rectangle::setWidth()
{
width = 4.0;
}
void Rectangle::computeArea()
{
cout << "Area of Rectangle: " << length * width << endl;
}
Rectangle::~Rectangle()
{
}
main()
{
int run = 1;
string option, choice;
cout<<"\t\t*******************SCIENTIFIC CALCAULATOR*******************"<<endl;
while(run)

{
cout << "\nOPTION 1 for computing Area and Circumference of the circle" << endl;
cout << "OPTION 2 for computing Area of the Rectangle" << endl;
cout << "Select your option(1-2): ";
cin >> option;
if(option == "1")
{
Circle nCircle;
nCircle.setRadius();
nCircle.computeAreaCirc();
cout << "Do you want to perform anyother calculation(Y/N):";
cin >> choice;
if(choice == "Y" || choice == "y")
{
continue;
}
else
{
break;
}
}
else if(option == "2")
{
Rectangle nRectangle;
nRectangle.setLength();
nRectangle.setWidth();
nRectangle.computeArea();
cout << "Do you want to perform anyother calculation(Y/N):";
cin >> choice;
if(choice == "Y" || choice == "y")
{
continue;
}
else
{
break;
}
}
else
{
cout << "Invalid Option!!, Option should be from (1-2)" << endl;
}
}
}
