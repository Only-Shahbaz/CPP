#include<iostream>
class box{
	int a;
	
	public:
		//default constructor 
		box(){
			a=10;
		}
	
	  friend int print(box);
};

 int print (box b){
	cout<<"Private data Member of Class Box is :"<<b.a;
}

using namespace std;
int main()
{
	box b;
	print(b);
	return 0;
}
