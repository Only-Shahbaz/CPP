#include<iostream>
using namespace std;

class Stack{
	
	private:
		int top;
		int arr[5];
	
	public:
		Stack()
		{
			top=-1;
			for (int i=0; i<=4; i++)
			{
				arr[i]=0;
			}
		}
		
	void display()
	{
		for (int i = 4; i>=0; i--)
		{
			cout<<arr[i]<<endl;
		}
	}	
	bool isEmpty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
	bool isFull()
	{
	
		if(top==4)
		  	return true;
		else
			return false;
	}
	void push(int value)
	{
		if(isFull())
		{
			cout<<"Stack is full !"<<endl;
		}
		else
		{
			top++;
			arr[top]=value;
			
		}
	}
	int pop()
	{
			if(isEmpty())
			{
				cout<<"Stack is empty!"<<endl;
				return 0;
			}
			else
			{
				int posvalue;
				posvalue = arr[top];
				arr[top]=0;
				top--;
				return posvalue;
			}
	}
};

int main()
{
	Stack s;
	s.push(25);
	s.push(10);
	s.push(2);
	s.push(4);
	s.push(3);
	s.pop();
	s.pop();
	s.push(45);
	s.display();
	cout<<"\n Stack implemented !";
	
	return 0;
}
