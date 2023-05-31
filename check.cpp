#include<iostream>
using namespace std;



	int addValue (int *a){
int b = (*a) + 2;
return b ;
}
main () {
int x =6 ;
cout << x << "," ;
cout << addValue(&x) << "," ;
cout << x ;
	
	
}
