#include<iostream>
#include<string.h>
using namespace std;
class student {
	
	private:
		char std_id[20];
		char vac_name[20];
		int age;
		int num_dose;
	public:
		student(){
			age = 20;
			num_dose = 2;
			strcpy(std_id,"MC210201279");
		}
		
		student (const char id [], const char name[], int a, int d){
			
			strcpy(std_id,id);
			strcpy(vac_name,name);
			age =a;
			num_dose=d;
		}
		
		student (int a, int d){
			age =a;
			num_dose=d;
		
		}
	friend void display(student std){
		cout<<std.age<<endl;
		cout<<std.num_dose<<endl;
		cout<<std.std_id<<endl;
		cout<<std.vac_name;
			
	}

};


int main()
{
 student std1, std("mc21045169", "Moderna", 20, 2);
 display(std1);
 display(std);

return 0;
}
