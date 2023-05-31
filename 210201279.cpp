#include <iostream>
/* ASSIGNMENT NO. 2
MC210201279 (MIT)
SHAHBAZ AHMED */

using namespace std;
class node  
{
public:
	
 int age;
 node *next;
};
class Queue 
{
private:
 node *f;
public:
 Queue()
 {
 f = NULL;
 }
 void insert(int p) 
 {
 node *t, *q;
 t = new node;
 t->age = p;
 if (f == NULL || p > f->age)
 {
 t->next = f;
 f = t;
 cout<<"Patient age entered in the system \n"<<endl;
 }
 else
 {
 q = f; 
 while (q->next != NULL && q->next->age >= p)
 q = q->next;
 t->next = q->next;
 q->next = t;

 }
 }
 void dequeue()
 {
 node *t;
 if (f == NULL) 
 cout << "Queue Underflow\n";
 else
 {
 t = f;
 cout << "Deleted item is: " << t->age << endl;
 f = f->next;
 delete(t);
 }
 }
 void display() 
 {
 node *ptr;
 ptr = f;
 if (f == NULL)
 cout << "Queue is empty\n";
 else
 {
 cout << "Queue is :\n";
 cout << "Priority Item\n";
 while (ptr != NULL) 
 {
 cout << ptr->age << endl;	
 ptr = ptr->next;
 }
 }
 }
};
int main()
{

int option, p;
Queue q;
  
do
 {
  	cout<<"1. For age entry of a patient. "<<endl;
	cout<<"2. For delete entry of a patient. "<<endl;
	cout<<"3. To display information of a patients on the basis of age (priority)."<<endl;
	cout<<"4. To exit your program."<<endl;
 
 cout << "\nEnter Your Choice Please : ";
 cin >> option;
 switch (option)
 {
 			case 1:
			cout << "\nEnter the age of patient: ";
 			cin >> p;
			q.insert(p);
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
			cout << "Enter correct option!\n\n";
 }
 } 
 
 while (true);

 return 0;
} 


