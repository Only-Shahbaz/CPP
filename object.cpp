#include<iostream>
#include<stdlib.h>
using namespace std;

class sum{
private:
int a,b,t;

public:
void get();
void put();
};

void sum::get(){
cout<<"Enter your values for a=";

cin>>a;	
cout<<"Enter your values for b=";
cin>>b;
}
void sum::put(){
t=a+b;
cout<<"Addition of a & b is="<<t;	
}
main(){

sum a;
a.get();
a.put();		
}
