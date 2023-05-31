#include<iostream>

using namespace std;

class Node
{
	int object;
	Node* nextNode;
	
	public:
		
	void set(int value)
	{
		object=value;	
	}
	int get()
	{
		return object;
	}	
	void setNext(Node* address)
	{
		nextNode=address;
	}
	Node* getNext()
	{
		return nextNode;
	}
};

class List
{
	Node* Head;
	Node* Odd;
	Node* Even;
	Node* Tail;
	Node* Odd_Tail;
	Node* Even_Tail;
	
	public:
		List()
		{
			Head = NULL;
			Odd = NULL;
			Even = NULL;
			Tail = NULL;
			Odd_Tail = NULL;
			Even_Tail = NULL;	
		}
	void insert()
	{
		int value;
		cout<<endl<<"Enter Numeric Values of your VU ID:";
		cin>>value;
		Node* newNode = new Node;
		newNode -> set(value);
		newNode -> setNext(NULL);
		if (Head == NULL)
		{
			Head = newNode;
			Tail = newNode;
		}
		else
		{
			Tail -> setNext(newNode);
			Tail = newNode;
		}
	}
		void Odd_List()
		{
			Node* ptr = Head;
			while (ptr != NULL)
			{
				if (ptr -> get() % 2 != 0)
				{
					Node* newNode = new Node;
					newNode -> set(ptr -> get());
					newNode -> setNext(NULL);
					if(Odd == NULL)
					{
						Odd = newNode;
						Odd_Tail = newNode;
					}
					else
					{
						Odd_Tail -> setNext(newNode);
						Odd_Tail = newNode;
					}
				}
			ptr = ptr -> getNext();	
			}
			ptr = Odd;
			while (ptr != NULL)
			{
				cout<<"List Value " <<ptr -> get()<<endl;
				ptr = ptr ->getNext();
			}
		}
	void Even_List()
		{
			Node* ptr = Head;
			while (ptr != NULL)
			{
				if (ptr -> get() % 2 == 0)
				{
					Node* newNode = new Node;
					newNode -> set(ptr -> get());
					newNode -> setNext(NULL);
					if(Even == NULL)
					{
						Even = newNode;
						Even_Tail = newNode;
					}
					else
					{
						Even_Tail -> setNext(newNode);
						Even_Tail = newNode;
					}
				}
			ptr = ptr -> getNext();	
			}
			ptr = Even;
			while (ptr != NULL)
			{
				cout<<"List Value " <<ptr -> get()<<endl;
				ptr = ptr ->getNext();
			}
		}
	void Merge_List()
	{
		Head = NULL;
		Node* ptr = Odd;
		while(ptr != NULL)
		{
			Node* newNode = new Node;
			newNode -> set(ptr -> get());
			newNode -> setNext(NULL);
			if (Head == NULL)
			{
				Head = newNode;
				Tail = newNode;
			}
			else
			{
				Tail -> setNext(newNode);
				Tail = newNode;
			}
			ptr = ptr -> getNext();
		}
		ptr = Even;
		while (ptr != NULL)
		{
			Node* newNode = new Node;
			newNode -> set(ptr -> get());
			newNode -> setNext(NULL);
			Tail -> setNext(newNode);
			Tail = newNode;
			ptr = ptr -> getNext();
		}
		ptr = Head;
		while(ptr != NULL)
		{
			cout<<"List Value :"<<ptr -> get()<<endl;
			ptr = ptr -> getNext();
		}
	}
};
int main()
{
	List list;
	
	for (int i = 0; i<=8;i++)
	
	list.insert();
	
	cout<<"\n*********Print**********"<<endl<<endl;
	cout<<"\nOdd Values of VU ID are :"<<endl;
	list.Odd_List();
	cout<<"\nEven Values of VU ID are :"<<endl;
	list.Even_List();
	cout<<"\nMerge Values of Both Lists :"<<endl;
	list.Merge_List();
	
	return 0;
}
