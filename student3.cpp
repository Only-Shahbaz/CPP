#include<iostream>
using namespace std;
class student {
	
	private:
		int age;
		int id;
	public:
		
		void setAge(int a){
			age=a;
		}
		
		int getAge()
		{
			return age;
		}
		
		
};


int main()
{
	
	student std3;
	std3.setAge(25);
	cout<<"Age of the student is :"<<std3.getAge();
	
	return 0;
}
