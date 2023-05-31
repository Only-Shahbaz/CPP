#include <iostream>
#include <queue>
using namespace std;
class node
{
	public:
	int age;
	node * next;

node ()
{
	next=NULL;
}	
node (int a)
{
	age=a;
	next=NULL;
}

};

class pqueue
{
	public:
	node * front;
	node * rear;
	
	pqueue ()
	{
		front =NULL;
		rear= NULL;
	}
	bool isEmpty()
	{
		if (front==NULL && rear== NULL)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	void enqueue(node *p)
	{
		if(isEmpty())
		{
			front=p;
			rear=p;
			cout<<"Entry Successfully done"<<endl;
		}
		else 
		{
			rear->next=p;
			rear=p;
			cout<<"Entry Successfully done again"<<endl;
		}
	}
	node * dequeue()
	{
	
	node * temp=NULL;
	
		if (isEmpty())
		{
			cout<<"No Element in the Queue:"<<endl;
			return NULL;
		}
		else 
		{
			if (front==rear)
			{
				temp=front;
				front=NULL;
				rear=NULL;
				return temp;
			}
		
			
			else 
			{
				temp=front;
				front=front->next;
				return temp;	
			}
		}
	}
	
	 void display() 
    {
      if(isEmpty())
      {
        cout << "Queue is Empty" << endl;
      }
    else
    {
      cout << "All values in the Queue are :" << endl;
        node *temp=front;
        while(temp!=NULL)
        {
          cout<<"("<<temp->age<<")"<<endl;
          temp=temp->next;
      	}
      cout<<endl;
    }
    
    }
};

int main()
{
		priority_queue<int> p1;
		pqueue  q;
		int option, data;
		
		
	do
	{
		cout<<"1. 	For age entry of a patient. "<<endl;
		cout<<"2.	For delete entry of a patient. "<<endl;
		cout<<"3.	To display information of a patients on the basis of age (priority)."<<endl;
		cout<<"4.	To exit your program."<<endl;
		
		cout<<"Enter your value: "; cin>>option;
		node *new_node=new node;
		switch (option)
		{
			case 1:
				cout<<"Enter the age of patient: ";
				cin>>data;
				new_node->age=data;
				q.enqueue(new_node);
				break;
				
			case 2:
				q.dequeue();
				break;
			
			case 3:
				q.display();
				break;
			case 4:
				exit(0);
				break;
				
			default:
				system("cls");
				cout<<"Enter correct option!\n\n"<<endl;
				break;
		}
	}
	
		while (option!=0);
}

 
