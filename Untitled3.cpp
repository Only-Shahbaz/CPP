#include<iostream>
using namespace std;

class inc{
	
	int a;
	
	public:
		
	inc(){
		a=5;
	}
	
	void operator--(int){
		a--;
	} 	
	void print();
};

 void inc::print(){
 	cout<<a;
 }
int main()
{
	inc obj;
	obj--;
	obj.print();
	
	return 0;
}





