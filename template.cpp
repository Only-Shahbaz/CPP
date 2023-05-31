#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

template <class t>

t myfun(t a,t b)
{
	return a+b;
}

main ()
{
	cout<<myfun<int>(2,3)<<endl;
	cout<<myfun<float>(2.56,3.658)<<endl;
	cout<<myfun<string>("Shahbaz","Ahmed");
}
