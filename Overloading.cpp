#include<iostream>
using namespace std;

int fun(int a, int b){
	int c =a+b;
	return c;
}

int fun(int a, int b, int c){
	int d =a*b*c;
	return d;
}
int main(){
	
	cout<<fun(20,40, 10);
	return 0;
}
