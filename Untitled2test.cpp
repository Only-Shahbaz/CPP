#include<iostream>
using namespace std;
int size=0;
class Student{
    public:
        string name;
        int marks;
        Student *nextStudent;
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
            nextStudent=setAddress;
        }
        Student* getNextStudent(){
            return nextStudent;
        }
};
class Stack{
    public:
        Student *headStudent=NULL;
        bool isEmpty(){
            if(headStudent==NULL){
                cout<<endl<<"Stack is Empty"<<endl;
                return true;
            }
            else{
                return false;
            }
        }
        void push(){
            string n;
            int m;
            Student *newNode=new Student;
            cout<<"Enter the name of Student: "<<endl;
            cin>>n;
            newNode->setName(n);
            cout<<"Enter the Marks of Student: "<<endl;
            cin>>m;
            newNode->setMarks(m);
            newNode->setNextStudent(NULL);
            if(headStudent==NULL){
                headStudent=newNode;
            }
            else{
                Student *ptr=headStudent;
                while ( ptr-> getNextStudent()!=NULL )
                {
                    ptr=ptr->getNextStudent();
                }
                ptr->setNextStudent(newNode);
                
            }

            cout<<endl<<"Student Data saved successfully"<<endl;
            size++;
        }
        void pop(){
            if(!isEmpty()){
                Student *pre=headStudent;
                Student *ptr=headStudent;
                while (ptr->getNextStudent()!=NULL)
                {
                    pre=ptr;
                    ptr=ptr->getNextStudent();
                }
                if(ptr==headStudent){
                    headStudent==NULL;
                }
                else{
                    pre->setNextStudent(NULL);
                }
                delete ptr;
                size--;
                cout<<endl<<"Student Data Remove Successfully from database"<<endl;
            }
        }
        void display(){
            if(!isEmpty()){
                string n[size];
                int m[size],i=0,j=0;
                cout<<"*************************"<<endl;
                cout<<"The Data of All students: "<<endl;
                cout<<"Name\t\tMarks"<<endl;
                Student *ptr=headStudent;
                while(ptr != NULL)
                {
                    n[i++]=ptr->getName();
                    m[j++]=ptr->getMarks();
                    ptr=ptr->getNextStudent();
                }
                for(int k=size-1;k>=0;k--){
                    cout<<n[k]<<"\t\t"<<m[k]<<endl;
                }
                cout<<"*************************"<<endl;
            }
        }

        void shortStack(){
            for(int i=0;i<size;i++){
                Student *ptr=headStudent;
                for(int j=0;j<size-1;j++){
                    string tmp;
                    if(ptr->getMarks()<ptr->getNextStudent()->getMarks()){
                        // ptr->setMarks(ptr->getMarks() + ptr->getNextStudent()  );
                        // some statement Goes here
                    }
                    ptr=ptr->getNextStudent();
                }
            }
        }

        void top(){
            if(!isEmpty()){
                // shortStack();
                cout<<endl<<endl<<"Top Positions:"<<endl;
                cout<<endl<<"Name\t\tMarks";
                Student *ptr=headStudent;
                for(int k=0;k<3;k++){
                    cout<<endl<<ptr->getName()<<"\t\t"<<ptr->getMarks();
                    ptr=ptr->getNextStudent();
                }
                cout<<endl<<endl;
            }
        }
};
