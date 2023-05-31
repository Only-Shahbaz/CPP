#include<iostream>
using namespace std;
class student {
	
	private:
		int age;
		int id;
	public:
		
		student (int a, int d){
			
			age=a;
			id=d;
		}
			void display(student std){
			cout<<"Roll No of the Student is :"<<std.id<<endl;
			cout<<"Age of the Student is :"<<std.age;			
			
		}
	
};
int main()
{
	student std2(20,2);
	std2.display(std2);
	
	return 0;
}
