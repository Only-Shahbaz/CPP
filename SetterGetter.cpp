#include<iostream>
using namespace std;
class employee
{
	int salary;
	
	public:
		void setsalary(int salary)
		{
		this->salary=salary;
		}
		int getsalary()
		{
			return salary;
		}
};
int main()
{
int s;
	employee e1;
	cout<<"Enter Salary of Employee ";cin>>s;
	e1.setsalary(s);
	cout<<"The Salary of the employee is "<<e1.getsalary();
	return 0;
	
}
