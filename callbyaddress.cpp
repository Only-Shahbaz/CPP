#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *x, int *y){
int temp;
temp = *x;
*x=*y;
*y=temp;
}
 main(){
int a, b;
cout<<"Enter value:a =";
cin>>a;
cout<<"Enter value:b =";
cin>>b;
swap(&a,&b);
cout<<"After Swapping"<<endl;
cout<<"Value of a is:"<<a;
cout<<"\nValue of b is:"<<b;
return 0;
}
