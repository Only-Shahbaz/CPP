#include <iostream>
using namespace std;
/* Assignment N0 3 CS201
MC210201279 (MIT)
SHAHBAZ AHMED*/

//Define Class Circle
class Circle
{
// Define Data Member
	private:
		double radius;            
	public:
		Circle()
{
radius = 0.0;
}
// Define Member Functions
		void setRadius()
{
radius = 5.6;
}        
		void computeAreaCirc()
{
// Value of PI = 3.14(Approx)
	cout << "Area of circle is: " << 3.14 * (radius * radius) << endl;
	cout << "Circumference of circle is: " << 2 * 3.14 * radius << endl;
}
};

//Define Class Rectangle
class Rectangle
{
// Define Data Member
	private:  
		double length; 
		double width;
	public:
	Rectangle()
{
length = 0.0;
	width = 0.0;
}
// Define Member Functions
void setLength()
{
	length = 5.0;
}
void setWidth ()
{
	width = 4.0;
}
void computeArea()
{
	cout << "Area of Rectangle: " << length * width << endl;
}
};
		
main()

{
	cout<<"********************SCIENTIFIC CALCULATOR********************"<<endl;
	cout<<""<<endl;
	int run = 1;
	string option, choice;

	while(run)
	{
		cout << "\nOPTION 1 for computing Area and Circumference of the circle" << endl;
		cout << "OPTION 2 for computing Area of the Rectangle" << endl;
		cout << "Select your desired option(1-2): ";
		
		cin >> option;
		
		if(option == "1")

		{
			Circle Cir;
			Cir.setRadius();
			Cir.computeAreaCirc();
			
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
			Rectangle Rect;
			Rect.setLength();
			Rect.setWidth();
			Rect.computeArea();
			
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
			cout << "Invalid Option!, Option should be from (1-2)" << endl;

		}
	}
}
