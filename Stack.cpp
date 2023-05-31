#include<iostream>
#define Max 4
using namespace std;
int stack_arr[Max];
void push(int data)
{	int top=-1;
	if(top==3)
	{
		cout<<"Stack is Full";
		return ;
	}

	top=top+1;
	stack_arr[top]=data;
	return;

}
int main()
{
	int data;
	push(1);
	push(2);
	push(3);
	push(4);
	
	

	return 0;
	
}
