#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>b){
		if(a>c){cout<<"A"<<a;}
		else {cout<<"C"<<c;}
	}
	else {
		if (b>c){cout<<"B"<<b;}
	else {cout<<"C"<<c;}
	}
	
	return 0;
	}
