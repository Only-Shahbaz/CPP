#include<iostream>
#include<string>
using namespace std;

class student{
	
private:
int rollNO;
string name;
string F_name;

public:

	student (int r, string n){
	
	rollNO =r;
	name=n;	
}	
void disp()
{
	cout<<"Name of the Student is :"<<name<<endl;
	cout<<"Roll No is :"<<rollNO<<endl;
	cout<<endl;
}
};
int main()	
{
	student std1(45, "Shahbaz");
	std1.disp();
	
	student std2(12, "Ahmed");
	std2.disp();
	
	return 0;
}
	

