#include <iostream>
using namespace std;

int main()
{
	int values[9]={2,1,0,2,0,1,2,7,9};
	
	int max=values[0];
	
	for (int i=1; i<=9; i++)
	{
		if(values[i]>max)
		{
			max=values[i];
		}
	}
	
	cout<<"Maximum Values is "<<max;
	
	return 0;
}
