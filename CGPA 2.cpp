#include<iostream>
using namespace std;
int main(){
	
	float gp;
	
	cin>>gp;
	
	if (gp==4){
		cout<<"A+";
	} else 	if (gp>=3.66 && gp<=3.99){
		cout<<"A";
	} else 	if (gp>=3.55 && gp<=3.65){
		cout<<"A-";
	}else {
		cout<<"F";
	} 
	
	return 0;
	
}
