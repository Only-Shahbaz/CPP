#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int size=0;
class Student
{
	public:
	int marks;
	string name;
	Student * next;
	Student() 
	{
    next = NULL;
   }
   void setName(string setn){
            name=setn;
        }
        string getName(){
            return name;
        }
        void setMarks(int setm){
            marks=setm;
        }
        int getMarks(){
            return marks;
        }
        void setNextStudent(Student *setAddress){
            next=setAddress;
        }
        Student* getNextStudent(){
            return next;
        } 
};

class stack
{
	public:
	Student *top;
	stack()
	{
		top=NULL;
	} 
	bool isEmpty()
	{
		if (top==NULL)
		{
			return true;
		 } 
		 else
		 {
		 	return false;
		 }
	}
	void push(Student *n)
	{
		if(top==NULL)
		{
		top=n;	
		}
		else 
		{
			Student *temp=top;
			top=n;
			n->next=temp;
			
		}
	cout<<"Student Informtion save sucessfully\n"<<endl;
	size++;
	}
	Student *pop()
	{
		Student * temp=NULL;
		if(isEmpty())
		{
			cout<<"Stack underflow"<<endl;
			return temp;
		}
			else 
			{
				temp=top;
				top=top->next;
				return temp;
			}
		}
	void display()
	{
		
		Student * temp=top;
		
		while (temp!=NULL)
		{
			cout<<endl<<temp->name<<"\t\t"<<temp->marks<<endl;
			temp=temp->next;
		}
	}
	void sortStack(){
            for(int i=0;i<size;i++){
                Student *ptr=top;
                for(int j=0;j<size-1;j++){
                    if(ptr->getMarks()<ptr->getNextStudent()->getMarks()){                        
						ptr=ptr->getNextStudent();
                }
            }
        }
}

void topers(){
            if(!isEmpty()){
                cout<<endl<<endl<<"Top Positions:"<<endl;
                cout<<endl<<"Name\t\tMarks";
                Student *ptr=top;
                for(int k=0;k<3;k++){
                    cout<<endl<<ptr->getName()<<"\t\t"<<ptr->getMarks();
                    ptr=ptr->getNextStudent();
                }
                cout<<endl<<endl;
            }
        }
};
		
int main()
{
	stack s1;
		while(true){
		cout<<"1. To add a student in Stack"<<endl;
		cout<<"2. To remove a Student from Stack."<<endl;
		cout<<"3. Display all students of Stack"<<endl;
		cout<<"4. Display top 3 positions of students. "<<endl;
		cout<<"5. Press 5 or any other key to close the program. "<<endl;
	
	int choice; int data;
		string name;
cout<<"\nEnter Your Choice:(1 to 5)";
	 cin>>choice;
	 Student *new_node= new Student;
		 switch(choice){
        case 1:
     	cout<<"Enter name of Student: ";
		cin>>name;
		cout<<"Enter Marks: ";
		cin>>data; 
		new_node->name=name;
		new_node->marks=data;
		new_node->next=NULL;
		
		s1.push(new_node);
		break;
     	case 2:s1.pop(); break;
     	case 3:cout<<"Name"<<"\t\t"<<"Marks";s1.display();break;
     	case 4:s1.sortStack();s1.topers();break;
     	case 5:exit(0);
     	default:cout<<"Option is not valid \n"<<endl;
     }	
}
	return 0;
}

