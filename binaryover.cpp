#include<iostream>
using namespace std;
class binary{
	
	int a;
	public:
		binary(int i){
			a=i;
		}
	binary operator + (binary b){
		int temp;
		temp = a+b.a;
		return temp;
	}	
	
	void print(){
		cout<<a;
	}
		
};

int main()
{
	binary b(10);
	binary c(30);
	binary d(0);
	d=c+b;
	d.print();
	
	return 0;
}
