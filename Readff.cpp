#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char ch;

ifstream file;
file.open("file.txt");

while(!file.eof())
{
file.get(ch);

cout<<ch;	
	
}



return 0;
}
