#include <iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next_add;
};
class linklist
{
	public:
	node *head=NULL;
	void insert()
	{
		int n;
		cout<<"Enter your values to be inserted in the link list: ";
		cin>>n;
		node *new_node = new node;
		new_node -> data = n;
		new_node -> next_add = NULL;
		if (head==NULL)
		{
			head=new_node;	
		}
		else
		{
			node *ptr = head;
			while (ptr -> next_add != NULL)
			{
				ptr = ptr -> next_add; 	
			}	
				ptr->next_add = new_node;
		}	
	}
	void display()
	{
		system("cls");
		if (head==NULL)
		{
			cout<<"list is empty";
		}	
		else
		{
			node *ptr=head;
			while (ptr !=NULL)
			{
				cout<<"Element is the List: "<<ptr -> data<<endl;
				ptr = ptr -> next_add;
			}
		}
	}	
};
int main()
{
	linklist l;
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.display();
	
	
	cout<<"\nNo errors!";
	return 0;
}
