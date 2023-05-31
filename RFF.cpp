#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	char c;
	ifstream myFile;
	myFile.open("first.txt");
	
	while (!myFile.eof())
	{
			myFile.get(c);
			cout<<c;
	}


	myFile.close();
	
return 0;
}
