#include<iostream>
using namespace std;

class sum	
{ 
private:
int a;
int b;

public:
sum(int a, int b)
{
int c;
c=a+b;
cout<<"The Sum of Numbers are : "<<c;
}
};

int main(){
sum sum1(10,20);
return 0;
}
