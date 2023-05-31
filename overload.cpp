#include<iostream>
using namespace std;
class add{
	
	int a;
	
	public:
		
		add(){
			
			a=40;
		}
		
		void operator++(){
			++a;
		}
		void display();
};
	void add::display(){
		cout<<a;	
		}	
		
	
int main()
{
		add a;
		++a;
		a.display();		
	return 0;
}
