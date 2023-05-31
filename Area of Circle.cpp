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
main (){Circle nCircle;
nCircle.setRadius();
nCircle.computeAreaCirc();
}
