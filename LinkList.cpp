#include <iostream>
using namespace std;
class linklist{
private:
struct node{
	int data;
	node *next_add;
	};
node *head;

public:
	linklist(){
		head=NULL;
	}
 void dispnode();
 void insertnode(int n);
 void count();
 void sum();
 void spec(int n);
 void avg();
 };
 void linklist::avg(){
 	node *temp = head;
	int sum=0;
 	int c=0;
 	int av;
 	while (temp != NULL){
 	c++;
 		sum = sum + temp->data;
 		temp = temp->next_add;
 		
	 }
	 av=sum/c;
	 cout<<"Average of Serial is :"<<av<<endl;
 }
 void linklist::spec(int n){
 	node *temp=head;
 	int a = 0;
 	 	while (temp != NULL){
 		a++;
	if(a==n){
	cout<<"your Number is "<<temp->data<<endl;
		break;
	}
	temp=temp->next_add;
		
	}
 }
 void linklist::sum(){

	node *temp=head;
	int sum=0;
	while (temp != NULL){
	sum=sum+temp->data;
	temp=temp->next_add;	
	}
	cout<<"Sum of the list is:"<<sum<<endl;	
}
void linklist::count(){

	node *temp=head;
	int c=0;
	while (temp != NULL){
	c++;
	temp=temp->next_add;	
	}
	cout<<"Count is list is:"<<c<<endl;	
}
void linklist::insertnode(int n){
	node *new_node = new node;
		new_node->data	= n;
		new_node->next_add = NULL;
		if (head==NULL)
		head=new_node;
		else{
		node *nodeptr;
		nodeptr=head;
		
		while (nodeptr->next_add !=NULL)
		{
			nodeptr=nodeptr-> next_add;
		}
		{
			nodeptr->next_add = new_node;
		}
		}
		}
void linklist::dispnode()
{
	node *temp=head;
	while (temp != NULL)
	
	{
	cout<<temp->data<<endl;
	temp=temp->next_add;	
	}
	
}

int main(){
	int value;
	cout<<"Enter your value for new node";
	cin>>value;
	linklist l1;
	l1.insertnode(value);
	l1.dispnode();
	l1.count();
	l1.sum();
	l1.spec(3);
	l1.avg();
	
	return 0;	
}
