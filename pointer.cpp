#include <iostream>
using namespace std;
// program to understand the concept of pointers
int main ()
{
    int x=25;
       // cout<<&x<<endl; // address of x variable
    int *p;
    //p=&x;
    //cout<<*p; // value of x variable

    // Now the concept in case of an array
    int a[3]={1,2,3};
    p=a;
    //p=&a[1];
    cout<<p+1;
    return 0;
}