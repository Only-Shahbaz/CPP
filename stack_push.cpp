#include <iostream>
#include <stdlib.h>
#define max 4

int stack_arr[max];
int top=-1;
int push(int data)
{

	if(top==max-1)
	{
		std::cout<<"Stack is over flow:";
		exit(0);
	}
	top=top+1;
	stack_arr[top]=data;
	return data;
}
int main()
{
	int data;
	data = push(4);
	data = push(5);
	data = push(8);
	data = push(4);
	
	
	std::cout<<"You pushed "<<data<<" into the stack";	
		
		return 0;
}
