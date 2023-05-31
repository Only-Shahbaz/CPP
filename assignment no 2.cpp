#include<iostream>
#include<string.h>
using namespace std;

class student{
private:
	
	char std_id[20];
	char vac_name[10];
	int age;
	int num_dose;

public:	

	void setAge(int a)
	{
		age=a;
	}
	int getAge()
	{
		return age;
	}
	
	void setDose(int d)
	{
		num_dose=d;
		
	}
	int getDose()
	{
		return num_dose;
	}
	student()
	{
		strcpy(std_id,"mc210201279");
		strcpy(vac_name,"Sinovac");
		age=20;
		num_dose=1;		
	}
	
	student(int a, int d, char id[20], char v[10])
	{
		age =a;
		num_dose=d;
		strcpy(std_id,id);
		strcpy(vac_name,v);	
	}
			void display (student std){
			cout<<"Print std object using display ()"<<endl;
			cout<<"Student ID:  "<<std.std_id<<endl;
			cout<<"Age:  "<<std.age<<endl;
			cout<<"Vaccination: "<<std.vac_name<<endl;
			cout<<"Vaccinated doses:  "<<std.num_dose<<endl<<endl;	
		}
	
	
};

int main(){
	
	student std1;
	std1.display(std1);
	student std2(21,2,"Sinopharm","BC123456789");
	std2.display(std2);
	student std3;
	std3.setAge(22);
	std3.setDose(3);
	
	cout<<"Print std3 using getter methods;"<<endl;
	cout<<"Age:"<<std3.getAge()<<endl;
	cout<<"Vaccinated doses:"<<std3.getDose();
	
	return 0;
}
