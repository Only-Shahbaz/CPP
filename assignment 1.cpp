#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		
	string name;
	int id, salary, allowance, utility, net_salary;
	
	public:
	void setValues()
	{
		cout<<"________________________________"<<endl;
		cout<<"Enter Employee ID:";
		cin>>id;
		cout<<"Enter Employee Name:";
		cin>>name;
		cout<<"Enter Employee salary:";
		cin>>salary;
	}	
	
	void calc()
	{
	allowance=0.25*salary;
	utility=0.276*salary;
	net_salary=allowance+salary+utility;
	
	}
	int getid()
	{
		return id;
	}
	string getname()
	{
		return name;
	}
	
	int getsalay()
	{
		return net_salary;
	}
	
};

int main(){
	Employee *obj = new Employee[3];
	
	for (int i = 0 ; i<3; i++){
		obj[i].setValues();
		obj[i].calc();
		
	}
	for (int i = 0; i<3; i++)
	{
	cout<<"________________________________"<<endl;
		cout<<"Name is :"<<obj[i].getname()<<endl;
		cout<<"ID is :"<<obj[i].getid()<<endl;
		cout<<"Net Salary is :"<<obj[i].getsalay()<<endl;
	cout<<"________________________________"<<endl;
	}
	
	return 0;
}
