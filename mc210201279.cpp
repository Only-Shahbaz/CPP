/* Shahbaz Ahmed (mc210201279) MIT, Assignment No 3*/

#include<iostream> 
#include<string> 
using namespace std; 
class person{ 
private: 
string name; 
int age; 
string gender; 
string address; 
string phone; 
public: 
person() 
{ name=""; age=0; gender=""; 
address=""; 
phone=""; 
} 
void set_name(string n){ 
name=n; 
} 
void set_age(int a){ 
age=a; 
} 
void set_gender(string g){ 
gender=g; 
} 
void set_address(string add){ 
address=add; 
} 
void set_phone(string p){ 
phone=p; 
} 
string get_name(){ 
return name; 
} 
int get_age(){ 
return age; 
} 
string get_gender(){ 
return gender; 
} 
string get_address(){ 
return address; 
} 
string get_phone(){ 
return phone; 
} 
virtual void save_info(){ 
cout<<"Enter Name:"; 
cin>>name; 
cout<<"Enter Age:"; 
cin>>age; 
cout<<"Enter Gender:"; 
cin>>gender; 
cout<<"Enter Address:"; 
cin>>address; 
cout<<"Enter phone number:"; 
cin>>phone; 
} 
virtual void display_info(){ cout<<"Name= "<<name<<endl; cout<<"Age= "<<age<<endl; cout<<"Gender= "<<gender<<endl; cout<<"address= "<<address<<endl; cout<<"Phone Number= "<<phone<<endl; 
} 
}; 
class teacher:public person{ 
private: 
string qualification; 
double salary; 
public: 
teacher(){ 
qualification=""; 
double{0}; 
} 
void save_info(){ 
cout<<"Enter Following Data For Teacher\n"; person::save_info(); 
cout<<"Enter qualification:"; 
cin>>qualification; 
cout<<"Enter salary:"; 
cin>>salary; 
} 
void display_info(){ 
cout<<"\nDisplaying Teacher info:\n------------------------\n"; person::display_info(); 
cout<<"Qualification= "<<qualification<<endl; cout<<"Salary= "<<salary<<endl; 
} 
}; 
class student:public person{ 
private: 
string p_edu; 
double ob_marks; 
double t_marks; 
public: 
student(){ 
p_edu=""; 
ob_marks=0; 
t_marks=0; 
} 
void save_info(){ 
cout<<"Enter data for Student.\n"; 
person::save_info(); 
cout<<"Enter Previous Education:"; 
cin>>p_edu; 
cout<<"Enter Obtain marks:"; 
cin>>ob_marks; 
cout<<"Enter Total Marks:"; 
cin>>t_marks; 
} 
void display_info(){ 
cout<<"\nDisplaying the Student data:\n---------------------------\n"; 
person::display_info(); 
cout<<"Previous Education= "<<p_edu; 
cout<<"\nObtained Marks= "<<ob_marks; 
cout<<"\nTotal Marks= "<<t_marks<<endl; 
} 
}; 
int main() 
{ 
char ch1,ch2; 
do{ 
cout<<"Enter Choice: T For Teacher, S For Student:"; cin>>ch1; 
if(ch1=='T' || ch1=='t'){ 
teacher t1; 
t1.save_info(); 
t1.display_info(); 
} 
else if(ch1=='S' || ch1=='s'){ 
student s1; 
s1.save_info(); 
s1.display_info(); 
} 
cout<<"Do you want to Enter More Data: Y For yes N For no:"; cin>>ch2; 
}while(ch2=='y' || ch2=='Y'); 
system("PAUSE"); 

return 0;
}

