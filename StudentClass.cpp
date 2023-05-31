#include<iostream>
using namespace std;
class student{
	
	private:
		
	int age;
	
	int id;
	
	
	public:
		student (){
			age = 20;
			id = 1;
		}
	
		void display(student std){
			cout<<"Roll No of the Student is :"<<std.id<<endl;
			cout<<"Age of the Student is :"<<std.age;			
			
		}
	
};



int main()
{
 student std1;   // constructor run values set 
 std1.display(std1);  // display function call

return 0;
}
