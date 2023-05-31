#include <iostream>
 
using namespace std;
  # define PI 3.14159265

// Define class
class Rectangle {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setLength(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

class Shape: public Rectangle {
   public:
      int computeArea()  { 
         return (width * height); 
      }
};

int main(void) {
   Shape Rect;
 
   Rect.setWidth(5);
   Rect.setLength(4);

   // Print the area of the object.
   cout << "Area of Rectangle is: " << Rect.computeArea()  << endl;
   
     return 0;
}
