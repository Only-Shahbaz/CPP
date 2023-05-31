#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	ofstream myFile("first.txt");
	myFile<<"This is my first file!";
	myFile.close();
return 0;
}
